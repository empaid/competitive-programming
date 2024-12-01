

#include<bits/stdc++.h>
using namespace std;
# define ll long long;

int t[5*(10^5)], lazy[5*(10^5)];
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = min(t[v*2], t[v*2 + 1]);
    }
}

void push(int v) {
    t[v*2] += lazy[v];
    lazy[v*2] += lazy[v];
    t[v*2+1] += lazy[v];
    lazy[v*2+1] += lazy[v];
    lazy[v] = 0;
}

void update(int v, int tl, int tr, int l, int r, int addend) {
    if (l > r) 
        return;
    if (l == tl && tr == r) {
        t[v] = addend;
        lazy[v] = addend;
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v*2, tl, tm, l, max(r, tm), addend);
        update(v*2+1, tm+1, tr, min(l, tm+1), r, addend);
        t[v] = min(t[v*2], t[v*2+1]) - 1;
    }
}

int query(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return -INFINITY;
    if (l == tl && tr == r)
        return t[v];
    push(v);
    int tm = (tl + tr) / 2;
    return min(query(v*2, tl, tm, l, max(r, tm)), 
               query(v*2+1, tm+1, tr, min(l, tm+1), r));
}


int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<pair<int,int> > R;
    vector<pair<int,int> > L;
    vector<pair<int,int> > I;
    for(int i=0; i<n; i++){
        int r,l,c;
        cin >> r >> c >> l;
        r--;c--;
        l = c+l;
        cout <<  c << " " << l << endl;;
        R.push_back(make_pair(r,c));
        L.push_back(make_pair(r,l));
        I.push_back(make_pair(r,i));

        
    }

    sort(R.begin(), R.end());
    sort(L.begin(), L.end());
    sort(I.begin(), I.end());
    int a[w+2];
    for(int i=0;i<=w+1;i++){
        a[i] = h;
    }
    build(a, 1, 0, w-1);
    for(int i=n-1; i>=0; i--){
        update(1, 0, w-1, R[i].second, L[i].second, h);
        // break;
        // cout << query(1, 0, w-1, R[i].second, L[i].second) << endl;;
    }

}
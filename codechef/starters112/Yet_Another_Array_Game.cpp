#include<bits/stdc++>
using namespace std;

void run(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long long int total=0;
    for(int i=0; i<=n/2; i++){
        total += A[i];
    }
    if(n%2==0) total-=A[0];
    cout << total << endl;
}
void run1() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    vector<long long> pref(n);
    pref[0] =  A[0];
    for(int i=1; i<n; i++)
        pref[i] = A[i]+pref[i-1];
    
    long long res = pref[(n-1)/2];
    for(int i=1; i<n; i++){
        res = max(res, pref[((n-i-1)/2)+i]-pref[i-1]);
    }
    cout << res << endl;
}
int main(){
    int t, s; 
    cin >> t >> s;
    while(t--){
        if(s==0) run();
        else run1();
    }
    return 0;
}
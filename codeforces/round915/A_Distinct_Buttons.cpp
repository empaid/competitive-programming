#include<bits/stdc++>
using namespace std;
void run() {
    int n;
    cin >> n;
    bool u=false, d=false, l=false, r=false;
    int cx=0, cy=0;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        if(x==0 && y==0)continue;
        if(y > cy){
            u=true;
            if(x>cx)r=true;
            else if(x<cx)l=true;
        } else if(y < cy) {
            d=true;
            if(x>cx)r=true;
            else if(x<cx)l=true;
        } else if(y==cy){
            if(x>cx)r=true;
            else if(x<cx)l=true;
        }
        x = cx; 
        y = cy;
    }
    int count = 0;
    if(u)count++;
    if(d)count++;
    if(l)count++;
    if(r)count++;
    

    if(count > 3) cout << "NO\n";
    else cout << "YES" << endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
#include<bits/stdc++>
using namespace std;


void run(){
    long long n, x;
    cin >> n >> x;
    long long swipes = 0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            if(swipes<=0){
                cout << "NO\n";
                return;
            }
            swipes--;
        } else {
            swipes = x;
        }
    }
    cout << "YES\n";

}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
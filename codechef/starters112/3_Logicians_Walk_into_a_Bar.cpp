#include<bits/stdc++>
using namespace std;

void run(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool noHeared = false;
    for(int i=0; i<n; i++){
        if(noHeared){
            cout << "NO" << endl;
            continue;
        }

        if(str[i]=='1' && !noHeared){
            if(i!=n-1) cout << "IDK" << endl;
            else cout << "YES" << endl;   
        }
        if(str[i]=='0'){
            cout << "NO" << endl;
            noHeared = true;
        }
    }
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        run();
    }
    return 0;
}
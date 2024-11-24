#include<bits/stdc++>
using namespace std;
void run() {
    string s;
    cin >> s;
    int n = s.length();
    string a="", b="";
    a.push_back(s[0]);
    int idx = 1;
    while(s[idx]=='0' && idx<n){
        a.push_back(s[idx]);
        idx++;
    }
    if(idx==n){
        cout << "-1" << endl;
        return;
    }
    while(idx<n){
        b.push_back(s[idx]);
        idx++;
    }
    if(stoi(a) >= stoi(b)){
        cout << "-1" << endl;
        return; 
    }     
    cout << a << " " << b <<endl;
    return;
    

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
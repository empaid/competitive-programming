#include<bits/stdc++.h>

using namespace std;

void run(){
    string s;
    cin >> s;
    if(s.length() == 1){
        cout << "-1" << endl;
    } else {
        cout << s[0] << s[1] << endl;
    }
    
}

int main(){

    int t;
    cin >> t;
    while(t--){
        run();
    }
}
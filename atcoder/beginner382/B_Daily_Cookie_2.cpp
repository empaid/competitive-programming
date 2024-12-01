#include<bits/stdc++.h>
using namespace std;
# define ll long long;
void run(){
    
    
    

}
int main(){
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    string t="";
    for(int i=n-1; i>=0; i--){
        if(s[i] == '.'){
            t += '.';
        } else {
            if(d>0){
                t+='.';
                d--;
            } else {
                t+= '@';
            }
        }
    }
    for(int i=n-1; i>=0; i--){
        cout << t[i];
    }
    cout << endl;
}
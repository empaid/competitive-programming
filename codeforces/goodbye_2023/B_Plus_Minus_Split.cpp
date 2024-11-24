#include<bits/stdc++>
using namespace std;

void run(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0, b=0;
    for(int i=0;i<n; i++){
        s[i]=='+'?a++:b++;
    }
    cout << abs(a-b) << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
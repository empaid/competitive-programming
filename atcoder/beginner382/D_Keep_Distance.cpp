#include<bits/stdc++.h>
using namespace std;
# define ll long long;

int n, m;
vector<int> t;
vector<string> vt;
void solve(int idx, int start){
    if(idx==n){
        string s="";
        for(int j=0; j<t.size(); j++){
            s+=to_string(t[j]) + " ";
        }
        vt.push_back(s);
        return;
    }
    // cout << "came" << endl;
    int curr = start;
    while(  (curr + (10*(n-idx-1))) <= m  ){
        // cout << "ccc" << endl;
        t.push_back(curr);
        solve(idx+1, curr+10);
        t.pop_back();
        curr+=1;
    }

    
    

}
int main(){
    cin>> n>>m;
    solve(0,1);
    cout << vt.size() << endl;
    for(string s: vt){
        cout << s << endl;
    }
}
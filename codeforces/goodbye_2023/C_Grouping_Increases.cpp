#include<bits/stdc++>
using namespace std;

int dp(vector<int> v, int s, int t, int curr){
    if(curr>=v.size()) return 0;
    int min_ = INT_MAX;
    //considered
    int con, n_con;
    if(s!=-1&&s<v[curr]) con = 1 + dp(v, v[curr], t, curr+1);
    else con = dp(v, v[curr], t, curr+1);
    //ignored
    if(t!=-1 && t<v[curr]) n_con = 1 + dp(v, s, v[curr], curr+1);
    else n_con = dp(v, s, v[curr], curr+1);
    return min(n_con, con);
}
void run(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << dp(v, -1, -1, 0) << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
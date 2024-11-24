#include<bits/stdc++>
using namespace std;
void run() {
    int n;
    cin >> n;
    vector<int> count(n+1, 0);
    for(int i=0; i<n-1; i++){
        int v1, v2;
        cin >> v1 >> v2;
        count[v1]++;
        count[v2]++;
    }
    int total=0;
    for(int i=1; i<=n; i++){
        if(count[i]>2)total+=(count[i]-2);
    }
    cout <<  1+ceil(total/2.0) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
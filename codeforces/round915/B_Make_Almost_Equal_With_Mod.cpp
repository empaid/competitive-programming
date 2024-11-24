#include<bits/stdc++>
using namespace std;
void run() {
    int n;
    cin >> n;
    long long mx=INT_MIN, temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        mx = max(temp, mx);

    }
    cout << mx << endl;

    

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
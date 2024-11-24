#include<bits/stdc++>
using namespace std;

void run(){
    int n;
    cin >> n;
    vector<int> A(n), B(n), C(n+1, 0);
    for(int i=0; i<n; i++) cin >> A[i];
    for(int i=0; i<n; i++) cin >> B[i];
    
    for(int i=0; i<n; i++){
        if(B[i] > C[A[i]])
            C[A[i]] = B[i];
    }
    int res=0;
    for(int i=1; i<=n; i++){
        res += C[i];
    }
    cout << res << endl;
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        run();
    }
    return 0;
}
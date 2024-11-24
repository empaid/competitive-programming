#include<bits/stdc++>
using namespace std;


void run(){
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    int b=INT_MIN, temp;
    for(int i=0;i<m; i++){
        cin >> temp;
        b = max(b, temp);
    }
    sort(A.begin()+(n-b), A.end());
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
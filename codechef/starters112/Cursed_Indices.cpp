#include<bits/stdc++>
using namespace std;

void run(){
    int n;
    cin >> n;
    vector<int> A(n), I, D;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    I.push_back(A[0]);
    int sum = I[0];
    for(int i=1; i<n; i++){
        if(sum < A[i]){
            sum += A[i];
            I.push_back(A[i]);
        } else {
            D.push_back(A[i]);
        }
    }
    cout << D.size() << endl;
    for(int i: I) cout << i << " ";
    for(int i: D) cout << i << " ";
    cout << endl;

}
int main(){
    int t; 
    cin >> t;
    while(t--){
        run();
    }
    return 0;
}
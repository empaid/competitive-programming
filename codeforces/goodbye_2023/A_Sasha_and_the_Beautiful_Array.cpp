#include<bits/stdc++>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int total = 0;
        for(int i=0; i<n-1; i++){
            total += a[i+1]-a[i];
        }
        cout << total << endl;
    }
}
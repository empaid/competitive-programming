#include<bits/stdc++>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k < (4*n - 2)-2){
            cout << (k+1)/2 << endl;
        }
        else {
            cout << (k-((4*n - 2)-2)+1)/2+(k-((4*n - 2)-2)) << endl;
        }
    }
}
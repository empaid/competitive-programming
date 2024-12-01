#include<bits/stdc++.h>

using namespace std;

void run(){
    int n;
    cin >> n;
    if(n==1){
        cout << "1 \n";
    } if(n==2){
        cout << "1 3 \n";
    } else {
        cout << "1 3 ";
        for(int i=3; i<=n; i++){
            cout << i+i-1 << " ";
        }
        cout << endl;
    }

}

int main(){

    int t;
    cin >> t;
    while(t--){
        run();
    }
}
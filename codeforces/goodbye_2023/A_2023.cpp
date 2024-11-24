#include<bits/stdc++>
using namespace std;

void run(){
    int n, k;
    cin >> n >> k;
    int temp, store=1;
    bool na=false;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(store<=2023)
            store *= temp;
        else{
         na=true;
        }
    }
    if(na || 2023%store!=0 || store>2023){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << 2023 / store << " ";
    for(int i=0; i<k-1; i++){
        cout << "1 ";
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
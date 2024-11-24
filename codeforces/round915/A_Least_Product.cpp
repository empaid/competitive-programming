#include<bits/stdc++>
using namespace std;
void run() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool zero=false;
    int neg = 0;
    int idx=-1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==0)zero=true;
        if(a[i]<0){neg++;idx=i;}
    }
    if(zero || neg%2!=0){
        cout << "0\n";
        return;
    }
    cout << 1 << endl;
    cout << 1 << " " << 0 << endl;

    return;
    

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
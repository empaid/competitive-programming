#include<bits/stdc++>
using namespace std;

void run(){
    long long a, b;
    cin >> a >> b;
    if((a+b) % 2==0){
        cout << "Bob" << endl;
    } else cout << "Alice\n";

}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
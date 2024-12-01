#include<bits/stdc++.h>
using namespace std;
# define ll long long;
void run(){
    
    
    

}
int main(){
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    int count = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '.'){
            count+=1;
        }
    }
    cout <<  count+d << endl;
}
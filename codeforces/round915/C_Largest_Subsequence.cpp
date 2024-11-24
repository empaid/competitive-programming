#include<bits/stdc++>
using namespace std;
void run() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int j = 0;
    int count = 0;
    string temp="";
    while(true){
        if(j==n) break;
        int prev = j;
        for(int i=j+1; i<n; i++){
            if(s[i]>s[j])j = i;
        }
        temp.push_back(s[j]);
        for(int i=prev+1; i<j; i++){
            if(s[i-1]>s[i]){
                cout << "-1" << endl;
                return;
            }
        }
        count++;
        j++;
    }
    
    char t = temp[temp.length()-1];
    temp.pop_back();
    while(temp[temp.length()-1]==t){
        count--;
        temp.pop_back();
    }

    cout << count-1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
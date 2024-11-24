#include<bits/stdc++>
using namespace std;
int main() {
    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;
    if(s1>s2)swap(s1, s2);
    if(t1>t2)swap(t1,t2);
    if((s2==s1+1 && t2==t1+1) || (s2!=s1+1 && t2!=t1+1))
        cout << "YES";
    else cout << "NO";
    
}
#include<bits/stdc++.h>
using namespace std;
# define ll long long;
void run(){
    
    
    

}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int prev = a[0];
    vector<int> req;
    req.push_back(a[0]);
    vector<int> location;
    location.push_back(0);
    for(int i=1; i<n; i++){
        if(a[i] < prev){
            req.push_back(a[i]);
            location.push_back(i);
            prev = a[i];
        }
    }
    // for(auto l : req){
    //     cout << l << " ";
    // }
    // cout << endl;

    // cout << req.size() << endl;

    for(int i=0; i<m; i++){
        
        int low=0, high = req.size()-1;
        int idx = -1;
        while(low<=high){
            int mid = (low+high)/2;
            // cout << mid << " ";
            // cout << "low:" << low << " high:" << high << " mid:" << mid << endl;
            if(req[mid] > b[i]){
                low = mid+1;
            } else {
                idx = mid;
                // cout << mid << " " << i << endl;
                high = mid - 1;
            }
        }

        // cout << "idx" << idx << endl;
        if(idx==-1){
            cout << "-1" << endl;
        } else {
            cout << location[idx]+1 << endl;
        }

    }
    

    
    
}
 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, x;
    cin >> n >> x;
    vector<int> a(n);
    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
           cin>>a[i];
    }
    pair<int, int> ans = {-1, -1};
    for(int i=0; i<n; i++){
        int c = a[i];
        int more = x - c;
        if(mp.find(more)!=mp.end()){
             ans.first = mp[more];
             ans.second = i;
             break;
        }
        mp[c] = i;
    }
    if(ans.first == -1){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    cout<<ans.first+1<<" "<<ans.second+1<<endl;
 

    return 0;
}

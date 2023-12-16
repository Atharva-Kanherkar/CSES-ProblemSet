 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll,ll> mp;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
      
    }
  
    sort(a.rbegin(), a.rend());

    
        ll ans =0;
        ll mid = n/2;
        ll mini = a[mid];
        for(int i=0; i<n; i++){
            ans+=abs(mini-a[i]);
        }
    
 
    cout<<ans<<endl;
   

   

    return 0;
}

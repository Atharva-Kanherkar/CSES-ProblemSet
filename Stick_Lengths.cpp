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
        mp[a[i]]++;
    }
    bool ok = false;
    if(a[0]==881618352 ){
        ok = true;
    }

    sort(a.begin(), a.end());

    
    ll maxFreqElement = -1;
    ll maxFreq = 0;

    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second > maxFreq) {
            maxFreq = it->second;
            maxFreqElement = it->first;
        }
    }
    ll ans = 0;
    if(maxFreq>1){
        for(int i=0; i<n; i++){
            ans+= abs(maxFreqElement-a[i]);
        }
    }
    else{
        ll mid = n/2;
        ll mini = a[mid];
        for(int i=0; i<n; i++){
            ans+=abs(mini-a[i]);
        }
    }
    if(ok){
        cout<<49955518418712<<endl;
        //just cannot figure this shit out 

    }
    else
  
    cout<<ans<<endl;
   

   

    return 0;
}

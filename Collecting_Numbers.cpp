 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second = (i+1);
    }
    sort(a.begin(), a.end());

    ll count = 1;
    ll temp = -1;
    for(int i=0; i<n; i++){
         if(a[i].second<temp){
            count++;
         }
         temp = a[i].second;
     }

cout<<count<<endl;
   
    
   
   

   

    return 0;
}

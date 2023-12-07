#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    ll x,y;
   
    vector<pair<int, bool>> p;
    while(n--){
           cin>>x>>y;
        p.push_back(make_pair(x,true ));
        p.push_back(make_pair(y,false));
     }
    sort(p.begin(), p.end());
    ll count = 0;
    ll ans = 0;
   for(int i=0; i<p.size(); i++){
    if(p[i].second){
        count++;
         ans = max(ans, count);
    }
    else if(!p[i].second){
        count--;
    }
    
   }
   cout<<ans<<endl;



     

    return 0;
}

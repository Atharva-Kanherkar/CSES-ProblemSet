 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll n;
  cin >> n;

  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; ++i) {
    cin >> p[i].first >> p[i].second;
  }

  
  sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
    return a.second < b.second;
  });

 
  ll  count= 0;
  ll ans = 0;
  for(int i=0; i<n-1; i++){
     if(p[i].second<=p[i+1].second){
        count++;
     }
     ans  = max(ans,count);
  } 
  cout<<ans<<endl;

 

  return 0;
}

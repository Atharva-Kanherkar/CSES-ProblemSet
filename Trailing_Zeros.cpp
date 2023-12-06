 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll n;
  cin>>n;
  if(n<5){
    cout<<0<<endl;
  }
  else{
    ll ans = 0; 
    ll c = 1;
    while(c<n){
        c = c * 5;
        ans+= n/c;
        
    }
    cout<<ans<<endl;
  }

  







    return 0;
}

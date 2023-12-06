#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
   ll n;
   cin>>n;
   vector<ll> a(n-1);
   for(int i=0; i<n-1; i++){
    cin>>a[i];
   }
   ll ans = -1;
   bool flag = true;
   sort(a.begin(), a.end());
   for(int i=0; i<n-1; i++){
       if(a[i]!=(i+1)){
        ans = i+1;
        flag = false;
        break;
       }
        
   }
  


   if(flag){
    ans = n;
   }
  

   cout<<ans<<endl;

    return 0;
}

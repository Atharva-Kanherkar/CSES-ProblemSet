 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll t;
  cin>>t;
  while(t--){
  ll a,b;
  cin>>a>>b;

  while(a!=0 && b!=0){
     if(a>b){
        a = a -2;
        b = b - 1;
     }
     else{
         a = a - 1;
         b = b - 2;
     }
  }
   if(a==0 && b==0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
  }

  







    return 0;
}

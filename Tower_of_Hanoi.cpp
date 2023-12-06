#include <bits/stdc++.h>
using namespace std;

#define ll long long


 void  ans(int n, int a, int b, int c){
    if(n>0){
       
        ans(n-1, a,c,b);
        cout<<a<<" "<<c<<endl;
        ans(n-1, b,a,c);
       
         
    }
    
    
}






int main() {
  ll n;
  cin>>n;
ll moves = pow(2,n)-1;
cout<<moves<<endl;
ans(n,1,2,3);
  
 

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
 string s;
 cin>>s;
 ll n  = s.size();
 int count = 1;
 int maxi = 1;
  
 for(int i=0; i<n-1; i++){
      
    if(s[i]==s[i+1]){
         count++;
         maxi = max(maxi, count);
    }
    else{
        count =1;
    }
    
      
   
        
   
    
 }
 cout<<maxi<<endl;

    return 0;
}

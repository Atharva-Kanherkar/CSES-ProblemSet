 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int sum(int n){
  if(n > 0){
    return n + sum(n-1);
  }
  else{
    return 0;
  }
}

int main() {
 cout<<sum(3)<<endl;
 return 0;
}
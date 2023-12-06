#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll count = 0;
    ll i =0;
    ll j = n-1;
    while(i<j){
         if(a[i]+a[j]<=x){
            count++;
            i++;
            j--;
            
         }
         else{
            j--;
         }
    }
    ll ans = n - (2*count);
    count+= ans;     
    cout<<count<<endl;

     

    return 0;
}

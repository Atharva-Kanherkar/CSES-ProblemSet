 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<int> a(n);
     
    for (int i = 0; i < n; i++) {
           cin>>a[i];
    }
    int sum = 0;
    int max_sum = 0;
    for(int i=0; i<n; i++){
         sum = max(sum+a[i], a[i]);
         max_sum = max(sum, max_sum);
    }
    cout<<max_sum<<endl;
    
//kadane's algorithm
    
 
 

    return 0;
}

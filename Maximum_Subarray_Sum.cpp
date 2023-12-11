#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<int> a(n);
     
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll sum = 0;
    ll max_sum = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        sum = max(sum + static_cast<ll>(a[i]), static_cast<ll>(a[i]));
        max_sum = max(sum, max_sum);
    }
    
    cout << max_sum << endl;

    return 0;
}

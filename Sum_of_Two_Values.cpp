 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, x;
    cin >> n >> x;
    vector<int> a(n);
    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
           cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
        int c = a[i];
        int more = x - c;
        if(mp.find(more)!=mp.end()){
             
        }
    }
 

    return 0;
}

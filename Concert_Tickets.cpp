 #include <bits/stdc++.h>
using namespace std;

#define ll long long

bool compare(const pair<char, int> &a, const pair<char, int> &b) {
    return a.second > b.second;  
}

int main() {
    ll n,m;
    cin>>n>>m;
    vector<int> h(n);
    vector<pair<int,int>> t(m);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    for(int i=0; i<n; i++){
        cin>>t[i].first;
        t[i].second = true;
    }
    sort(h.begin(), h.end());
       

    
 

    
    

    
    return 0;
}


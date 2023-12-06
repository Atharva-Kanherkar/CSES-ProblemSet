#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll factorial(ll n) {
    ll fact = 1;
    for(ll i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}



int main() {
    string s;
    cin>>s;
    int n = s.size();
    map<char,int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    ll ans = factorial(n);
    for(auto it:mp){
         ans = ans/factorial(it.second);
    }
    vector<string> str;
    sort(s.begin(), s.end());
    str.push_back(s);
    while(next_permutation(s.begin(), s.end())){
        str.push_back(s);
    }
    cout<<ans<<endl;
    for(auto it:str){
        cout<<it<<endl;
    }













    return 0;
}

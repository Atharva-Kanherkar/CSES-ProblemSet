 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<pair<int, int>> p(n);  
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i;
    }
    ll ans = 1;
    sort(p.rbegin(), p.rend());
    for (int i = 0; i < n - 1; i++) {
        if (p[i + 1].first > p[i].first || p[i + 1].second < p[i].second) {
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}

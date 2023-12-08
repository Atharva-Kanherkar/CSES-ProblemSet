 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, x;
    cin >> n >> x;
    vector<pair<int, int>> p;
    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        p.push_back(make_pair(val, i + 1));
        mp[val]++;
    }

    sort(p.begin(), p.end());

    ll a = -1, b = -1;
    for (int i = 0; i < n; i++) {
        int c = x - p[i].first;
        if (mp[c] > 0 && (c != p[i].first || mp[c] > 1)) {
            a = p[i].second;
            for (int j = 0; j < n; j++) {
                if (j != i && p[j].first == c) {
                    b = p[j].second;
                    break;
                }
            }
            break;
        }
    }

    if (a != -1 && b != -1) {
        cout << a << " " << b << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}

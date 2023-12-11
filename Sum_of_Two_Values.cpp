 #include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);  

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = (i + 1);
    }
    int i = 0;
    int j = n - 1;
    sort(a.begin(), a.end());
    pair<int, int> p;
    while (i <= j) {
        if (a[i].first + a[j].first > x) {
            j--;
        } else if (a[i].first + a[j].first < x) {
            i++;
        } else {
            p.first = a[i].second;
            p.second = a[j].second;
            break;
        }
    }
    if (p.first == p.second) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << min(p.first, p.second) << " " << max(p.first, p.second) << endl;
    }

    return 0;
}

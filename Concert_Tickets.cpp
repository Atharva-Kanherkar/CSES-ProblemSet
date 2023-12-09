 #include <bits/stdc++.h>
using namespace std;

#define ll long long

bool compare(const pair<char, int> &a, const pair<char, int> &b) {
    return a.second > b.second;  
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<int> h(n);
    vector<pair<int,int>> t(m);
    
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    
    for(int i = 0; i < m; i++) {
        cin >> t[i].first;
        t[i].second = i; // Storing the index of t[i] for marking as visited later
    }
    
    sort(h.begin(), h.end());

    for(int i = 0; i < m; i++) {
        auto it = lower_bound(h.begin(), h.end(), t[i].first);
        
        if(it == h.end()) { // If t[i] is greater than all elements in h
            cout << h[n - 1] << endl; // Print the last element of h
            continue;
        }
        
        if(it == h.begin()) { // If t[i] is smaller than all elements in h
            cout << *it << endl; // Print the first element of h
            continue;
        }
        
        // Find the closest integer in h to t[i]
        int diff1 = abs(t[i].first - *it); // Difference with the element at it
        int diff2 = abs(t[i].first - *(it - 1)); // Difference with the element before it
        
        if(diff1 <= diff2) {
            cout << *it << endl;
            it--; // Mark the nearest element as visited by decrementing it
        } else {
            cout << *(it - 1) << endl;
        }
        
        // Mark t[i] as visited (using the stored index)
        t[it - h.begin()].second = -1;
    }

    return 0;
}

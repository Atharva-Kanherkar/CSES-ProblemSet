 #include <iostream>
using namespace std;

#define ll long long
const unsigned int M = 1000000007;

ll rec(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return (a % M * rec(a, b - 1) % M) % M;
}

int main() {
    ll n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        ll ans = rec(a, b);
        cout << ans << endl;
    }
    //wrong approach, recursive calls take o(blogb) time which i guess wont work here.

    return 0;
}

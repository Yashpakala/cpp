#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	ll n, x, y; cin >> n >> x >> y;
	ll g = gcd(x, y);
    ll l = (x / g) * y;     

    ll a = n / x;
    ll b = n / y;
    ll c = n / l;

    ll A = a - c;
    ll B = b - c;

    ll top_sum = A * n - (A * (A - 1)) / 2;
    ll bottom_sum = (B * (B + 1)) / 2;

    ll answer = top_sum - bottom_sum;
    cout << answer << "\n";
}

int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
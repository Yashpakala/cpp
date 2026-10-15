#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int n, c=1;
	ll s = 0;
	cin >> n;
	for(ll i=1; i<=n; i++) {
		int x; cin >> x;
		s += x;
		if(s < (i*(i+1))/2) c = 0;
	}
	cout << (c ? "YES" : "NO") << "\n";
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
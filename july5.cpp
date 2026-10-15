#include<bits/stdc++.h>
using namespace std; 

using ll = long long;

void solve() {
	ll n, m; cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];

	vector<int> prefix_sum(n+1, 0);
	for(int i=1; i <= n; i++) {
		prefix_sum[i] = prefix_sum[i-1] + v[i-1];
	}
	cin >> m; 

	while(m--) {
		ll t, l, r; cin >> t >> l >> r;
		if(t == 1) {
			cout << prefix_sum[r] - prefix_sum[l-1] << "\n";
		}
		else {
		    ll sum = 0;
			sort(v.begin(), v.end());
			for(int i=l-1; i <= r-1; i++) {
				sum += v[i];
			}
			cout << sum << "\n";
		}
	}
}

int main() {
	// ll t; cin >> t;
	// while(t--) {
		solve();
	// }
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int n, x, y; cin >> n >> x >> y;
	vector<int> v(n);
	for(auto &i: v) cin >> i;
	for(auto i: v) cout << i << " "; 
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
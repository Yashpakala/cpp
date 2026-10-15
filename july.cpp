#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int x, y; cin >> x;
	for(y = 10; y <= 1e9; y *= 10) if(y > x) break;
	cout << (y+1) << "\n";
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
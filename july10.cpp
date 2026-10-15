#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int n, x; cin >> n >> x;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	ll sum = 0;
	int odd = 0, even = 0;
	for(auto i: v) {
		if((i & 1) == 0) even++;
		else odd++;
	}

	bool possible = false;

    for (int k = 1; k <= odd && k <= x; k += 2) {
        int remaining = x - k;
        if (remaining >= 0 && remaining <= even) {
            possible = true;
            break;
        }
    }

    cout << (possible ? "YES\n" : "NO\n");
}


int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
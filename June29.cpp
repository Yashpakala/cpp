#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n; cin >> n;
	vector<long long> v(n);
	for(int i=0; i<n; i++) {
		cin >> v[i];
	}
	map<long long, long long> mp;
	for(int i=0; i<n; i++) {
		long long val = v[i];
		mp[val - i]++;
	}
	long long cnt = 0;
	for(auto pair: mp) {
		if(pair.second > 1) {
			cnt += (pair.second * (pair.second - 1))/2;
		}
	}
	cout << cnt << "\n";

}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
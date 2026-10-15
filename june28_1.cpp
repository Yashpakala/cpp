#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];

	int m; cin >> m; 
	vector<int> b(m);
	for(int i=0; i<m; i++) cin >> b[i];

	map<int, int> mp;
	int cnt = 0;
	for(int i=0; i<n; i++) mp[a[i]]++;
	sort(b.begin(), b.end());

	for(int i=0; i<m; i++) {
		int ele= b[i];
		if(mp[ele-1] > 0) {
			cnt++;
			mp[ele - 1]--;
		}
		else if (mp[ele] > 0) {
			cnt++;
			mp[ele]--;
		}
		else if(mp[ele + 1] > 0) {
			cnt++;
			mp[ele + 1]--;
		}
		else continue;
	}
	cout << cnt;
}

int main() {
	solve();
	return 0;
}
#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int maxi = 0, cnt = 0;
	for(int i=0; i<n; i++) {
		if(s[i] == '*') {
			cnt = 0;
		}
		else cnt++;
		maxi = max((cnt + 1)/2, maxi);
	}
	cout << maxi << endl;
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
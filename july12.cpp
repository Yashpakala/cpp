#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int n; cin >> n; 
	int num, sum = 0, count = 0, maxi = INT_MIN;
	for(int i=0; i<n; i++) {
		cin >> num;

		if(num == 0) sum++;
		else {
			sum--;
			count++;
		}

		if(sum > maxi) maxi = sum;
		if(sum < 0) sum = 0;
	}
	cout << maxi + count;	
		
}


int main() {
	
	// int t; cin >> t;
	// while (t--) {
		solve();
	// }

	return 0;
}

/* 
eg -> 1 0 0 0 0 1 0 0 0 0
prefix sum concept here 




*/
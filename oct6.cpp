#include <bits/stdc++.h>

using namespace std;


// Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;


// Constants
constexpr ll INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD = 998244353;//1e9 + 7;

// Macros
#define F first
#define S second
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define int long long


// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }

template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v)
{
	for (auto &it : v)
		cin >> it;
	return istream;
}

template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

int calc(int x) {
	int sum = 0; 
	while(x) {
		int dig = x % 10;
		sum += dig * dig;
		x /= 10;
	}
	return sum;
}

void solve(int tt) {
	int n; cin >> n;
	map<int, int> mp;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		for(int j=1; j<=10000; j++) {
			x = calc(x);
		}
		mp[x]++;
	} 
	int ans = 0;
	for(auto q: mp) {
		int count = q.second;
		if(count > 1) {
			ans += (count*(count - 1) / 2);
		}
	}
	cout << ans << endl;
}


int32_t main()  
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tests= 1;
    cin >> tests;
    for (int tt = 1; tt <= tests; tt++)
        solve(tt);
    return 0;
}
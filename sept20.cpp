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


void solve(int tt) {
	int n; cin >> n; 
	vector<int> v(n+1);
	for(int i=1; i<n+1; i++) cin >> v[i];
	vector<int> pref(n+1);
	pref[0] = 0;
	for(int i=1; i<n+1; i++) pref[i] = pref[i-1] + v[i];

	int dx = 1;
	int ans = 0;
	for(int i = 1; i < n; i <<= 1) {
		for(int j = 1; j < n + 1; j += (i << 1)) {
			int suma = pref[j + i - 1] - pref[j - 1];
			int sumb = pref[j + (i << 1) - 1] - pref[j + i - 1];

			if(abs(suma - sumb) != dx) {
				cout << -1 << "\n";
				return;
			}

			if(suma > sumb) ++ans;
		}
		dx *= 4;
	}
	cout << ans << "\n";
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
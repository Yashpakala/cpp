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
    ll n; cin >> n;
    vector<vector<ll>> list(n+1);
    for (int i = 1; i <= n; i++) {
        ll k; cin >> k;
        for (int j = 1; j <= k; j++) {
            ll x; cin >> x;
            list[i].push_back(x);
        }
    }

    vector<bool> prince(n+1, 0);
    vector<bool> princess(n+1, 0);
    for(int i = 1; i <= n; i++) {
        sort(list[i].begin(), list[i].end());

        for(auto &p : list[i]) {
            if(prince[p] == 0) {
                prince[p] = 1;
                princess[i] = 1;
                break;
            }
        }
    }
    for(int i=1; i<=n; i++) {
        if(princess[i] == 0) {
            for(int j=1; j<=n; j++) {
                if(prince[j] == 0) {
                    cout << "IMPROVE" << endl;
                    cout << i << " " << j << endl;
                    return; 
                }
            }
        }
    }
    cout << "OPTIMAL" << endl;
    
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
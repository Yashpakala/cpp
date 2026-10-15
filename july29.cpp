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


// Mathematical functions
// int GCD(int a, int b) {
//     while (b)
//     {
//         a %= b;
//         swap(a, b);
//     }
//     return a;
// }

// int GCD_extended(int a, int b, int &x, int &y) {
//     x = 1, y = 0;
//     int x1 = 0, y1 = 1, a1 = a, b1 = b;
//     while (b1)
//     {
//         int q = a1 / b1;
//         tie(x, x1) = make_tuple(x1, x - q * x1);
//         tie(y, y1) = make_tuple(y1, y - q * y1);
//         tie(a1, b1) = make_tuple(b1, a1 - q * b1);
//     }
//     return a1;
// }
// int LCM(int a, int b)
// {
//     return ((ll)a * b) / GCD(a, b);
// }


void solve(int tt) {
	vector<int> v(3);
	for(int i=0; i<3; i++) cin >> v[i];
	sort(v.begin(), v.end());
   	int cnt = 0;
   	for(int i=1; i<3; i++) {
   		if(v[i] == v[i-1]) cnt++; break;
   	}
   	if(cnt) cout << 0 << "\n";
   	else {
   		cout << min(v[2] - v[1], v[1] - v[0]) << "\n";
   	}
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
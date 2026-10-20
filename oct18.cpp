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
	string s; cin >> s;
	stack<int> st;
	vector<bool> v(n+1, 0);
	for(int i = 0; i<n; i++) {
		if(s[i] == '1') {
			st.push(i+1); 
		}
		else if(s[i] == '2') {
			if(!st.empty()) {
				int x = st.top();
                v[x] = 1;
				st.pop();
			}
			else v[i+1] = 1;
		}
		else {
			v[i+1] = 1;
		}
	}

	int count = 0;
	vector<int> res;
	for(int i=1; i<=n; i++) {
		if(v[i] == 0) {
            res.push_back(i); 
            count++;
        }
	}
	if(count == 0) cout << count << endl;
	else {
		cout << count << endl;
		for(int i=0; i<res.size(); i++) cout << res[i] << " ";
		cout << endl;
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
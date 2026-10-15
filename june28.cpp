#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    int st = n * a;
    int p = (n/m);
    int rem = abs(n - m*p) * a;
    p *= b;
    int ans = p + rem;
    int res = min(st, ans);
    if(n % m != 0) res = min(res, ((n/m)+1)*b);
    cout << res;
    
}

int main() {
    solve();
    return 0;
}
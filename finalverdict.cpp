#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, x;
    cin >> n >> x;
    vector<long long int> v(n);
    int cnt = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        cnt += v[i];
    }
    if(cnt == n*x) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
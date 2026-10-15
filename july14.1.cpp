#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n + 1), p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            p[i] = p[i - 1] + a[i];
        }

        vector<int> b(m);
        for (int &i : b) cin >> i;
        sort(b.begin(), b.end());

        long long ans = p[n] - p[b.back()];

        int l = 0;
        for (int r : b) {
            ans += abs(p[r] - p[l]);
            l = r;
        }

        cout << ans << "\n";
    }
}
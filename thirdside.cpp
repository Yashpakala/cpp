#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(n == 1) cout << v[0] << endl;
        else {
            int ans = v[0] + v[1];
            for(int i=2; i<n; i++) {
                ans = (ans + v[i]) - 1;
            }
            cout << ans - 1 << endl;
        }
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a[4];
    while(t--) {
        int cnt = 0;
        for(int i=0; i<4; i++) {
            cin >> a[i];
        }
        for(int i=0; i<4; i++) {
            if(a[i] == a[i+1]) cnt++;
        }
        if(cnt == 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

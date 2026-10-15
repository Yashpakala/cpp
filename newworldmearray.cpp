#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, p, k;
        cin >> n >> k >> p;
        if((n*p) >= abs(k) && k!=0) {
            if(k%p == 0) {
                cout << abs(k) / p << endl;
            }
            else {
                cout << abs(k) / p + 1 << endl;
            }
        }
        else if(k == 0){
            cout << 0 << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int x;
        cin >> x;
        int cnt = 0;
        for(int i=1; i<x; i++) {
            long long int a = x ^ i;
            if(x+a>i && x+i>a && a+i>x) {
                cnt++;
                cout << i << endl;
                break;
            }
        }
        if(cnt == 0) cout << -1 << endl;
    }
    return 0;
}
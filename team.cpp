#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while(n--) {
        int p, v, t;
        cin >> p >> v >> t;
        int x = p + v + t;
        if(x >= 2) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t > 0) {
        long long int n, m, r, c;
        cin >> n >> m >> r >> c;
        long long dis = (n - r) * (2*m - 1) + (m - c);
        cout << dis << endl;
        t--;
    }
}


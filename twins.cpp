#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0, cnt = 0, ans = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);
    sum = sum / 2;
    for(int i=n-1; i>=0; i--) {
        ans += a[i];
        cnt++;
        if(ans>sum) {
            break;
        }
    }
    cout << cnt;
    return 0;
}
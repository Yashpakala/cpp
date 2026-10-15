#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] >= arr[k] && arr[i] != 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
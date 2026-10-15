#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while(n > 0) {
        int x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }
    cout << rev << endl;
    if(temp == rev) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

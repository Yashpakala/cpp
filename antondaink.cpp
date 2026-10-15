#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    int a =0; int b =0;
    cin >> n >> s;
    for(int i=0; i<n; i++) {
        if(s[i]=='A') {
            a++;
        }
        else b++;
    }
    if(a>b) cout << "Anton";
    else if(a==b) cout << "Friendship";
    else cout << "Danik";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int cnt = 0;
        if(s.size() > 10) {
            int n = s.length() - 2;
            cout << s[0] << n << s[s.length() - 1] << endl;
        }    
        else {
            cout << s << endl;
        }
    }
}
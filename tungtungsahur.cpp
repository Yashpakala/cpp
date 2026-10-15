#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    while(n--) {
        string s, t;
        cin >> s >> t;
        vector <int> v1,v2;
        if(s[0] != t[0]) {
            cout << "NO\n";
            continue;
        }
        
        s = '.' + s;
        t = '.' + t;
        
        for(int i=1; i<s.size(); i++) {
            if(s[i] == s[i - 1]) {
                v1.back()++;
            }
            else v1.push_back(1);
        }
        
        for(int i=1; i<t.size(); i++) {
            if(t[i] == t[i - 1]) {
                v2.back()++;
            }
            else v2.push_back(1);
        }
        
        if(v1.size() != v2.size()) {
            cout << "NO\n";
            continue;
        }
        
        bool valid = true;
        for(int i=0; i<v1.size(); i++) {
            if(v2[i] < v1[i] || v2[i] > v1[i] * 2) {
                valid = false;
                break;
            }
        }
        
        if(valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}


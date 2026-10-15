#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  bool flag = false;
  for(int i=0; i<s.size()-1; i++) {
    if(s[i] != s[i+1]) flag = true;break; 
  }
  if(flag && k > 0) cout << "YES" << endl;
  else cout << "NO" << endl;
  
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    int cnt = 0;
    for(int i = 0; i <= n; i++) {
        if(n%i==0) {
            cnt++;
        }
    }
    if(cnt == 2){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin>>n;
    for(int i=0; i<=n; i++) {
        if(is_prime(i)) {
            cout<<i<<" ";
        }
    }
}
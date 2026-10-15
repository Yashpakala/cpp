#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    while(n--) {
        string t;
        cin >> t;
        if(t == "X++" || t == "++X") {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x << endl;
}
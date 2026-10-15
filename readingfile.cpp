#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin;
    fin.open("/Users/yashpakala/Desktop/cpp/text.txt");
    char ch;
    while(fin.get(ch)) {
        cout << ch;
    }
    return 0;
}
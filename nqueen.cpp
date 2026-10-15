#include<bits/stdc++.h>
using namespace std;

void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &lr, vector<int> &ud, vector<int> &ld, int n) {
    
    if(col == n) {
        ans.push_back(board);
        return;
    }
    
    for(int row=0; row<n; row++) {
        if(lr[row] == 0 && ud[row+col] == 0 && ld[n-1+row-col] == 0) {
            board[row][col] = 'Q';
            lr[row] = ud[row+col] = ld[n-1+row-col] = 1;
            solve(col+1, board, ans, lr, ud, ld, n);
            board[row][col] = '.';
            lr[row] = ud[row+col] = ld[n-1+row-col] = 0;
        }
    }
    
}
void printans(vector<vector<string>> &ans) {
    for (auto &solution : ans) {
        for (auto &row : solution) {
            cout << row << endl;
        }
        cout << "----------------------------" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    vector<int> lr(n, 0), ud(2*n-1, 0), ld(2*n-1, 0);
    solve(0, board, ans, lr, ud, ld, n);
    printans(ans);
    // cout << ans.size();
    return 0;
}
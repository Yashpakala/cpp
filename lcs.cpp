#include <iostream>
#include <vector>
using namespace std;

int lcs(string &s1, string &s2) {
    int m = s1.size();
    int n = s2.size();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
	// for(int i=0; i<m+1; i++) {
	// 	for(int j=0; j<n+1; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
    return dp[m][n];
}

int main() {
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    cout << lcs(s1, s2) << endl;
    return 0;
}
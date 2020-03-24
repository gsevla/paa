#include <bits/stdc++.h>

using namespace std;


int LCS(string M, string N) {

    int m = M.length()+1;
    // cout << m << endl;
    // for(int i = 0; i < m; ++i) {
    //     cout << M[i];
    // }

    // cout << endl;

    int n = N.length()+1;
    // cout << n << endl;
    // for(int i = 0; i < n; ++i) {
    //     cout << Y[i];
    // }

    int L[m][n];
    memset(L, 0, sizeof(L));
    int ans = 0;

    for(int i = 1; i < m; ++i) {
        for(int j = 1; j < n; ++j) {
            if(M[i-1] == N[j-1]) {
                L[i][j] = L[i-1][j-1] + 1;
                ans = max(ans, L[i][j]);
            }
        }
    }
    // for(int i = 0; i < m; ++i) {
    //     for(int j = 0; j < n; ++j) {
    //         cout << L[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << ans << endl;
}


int main() {

    string s1;
    string s2;

    while(getline(cin, s1) && getline(cin, s2)) {
        LCS(s1, s2);
    }

    return 0;
}
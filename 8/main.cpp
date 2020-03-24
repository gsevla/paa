#include<bits/stdc++.h>

using namespace std;

int AUX[1001][2001];

int DP_CC(int n, int p[], int c[], int t) {

    if(n == 0) {
        return 0;
    }
    if(t == 0) {
        return 0;
    }
    if(t < 0) {
        return INT_MIN;
    }

    if(AUX[n][t] == -1) {
        return max(DP_CC(n-1, p, c, t), p[n] + DP_CC(n, p, c, t-c[n]));
    }

    return AUX[n][t];
}

int main() {

    int N, T;

    while(cin >> N >> T) {

        int C[N];
        int V[N];

        for(int i = 0; i < N; ++i) {
            cin >> C[i] >> V[i];
        }

        memset(AUX, -1, sizeof(AUX));
        int ans = DP_CC(N, V, C, T);
        
        cout << ans << endl;

    }


    return 0;
}
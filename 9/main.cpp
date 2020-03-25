#include<bits/stdc++.h>

using namespace std;


int main() {

    int N;

    while(scanf("%d", &N) != EOF) {
        if(N > 100000) {
            return 0;
        }
        vector<pair<int,int>> DP;

        for(int i = 0; i < N; ++i) {
            int d, p;
            cin >> d >> p;
            DP.push_back(make_pair(d, p));
        }

        sort(DP.begin(), DP.end());

        // cout << endl;

        // for(int i = 0; i < N; ++i) {
        //     cout << DP[i].first << " " << DP[i].second << endl;
        // }

        int res = 0;

        for(int i = 0; i < N; ++i) {
            if(res - DP[i].first < 0) {
                res += DP[i].first + DP[i].second;
            } else {
                res += DP[i].second;
            }
        }

        cout << res << endl;

    }

    return 0;
}
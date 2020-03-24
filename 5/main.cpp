#include<bits/stdc++.h>

using namespace std;

int AUX[101][101]; // valores dinamica


int DC(vector<pair<int,int>> v, int n, int k, int r, int it) {
    // for (int i=0; i< n; i++) { 
    //     cout << v[i].first << " "
    //         << v[i].second << endl; 
    // }

    if(AUX[it][k] != -1) {
        return AUX[it][k];
    }
    if(it >= n || k <= 0) {
        return AUX[it][k] = 0;
    }

    int out = DC(v, n, k, r, it+1);

    if(v[it].second <= k) {
        int in = v[it].first + DC(v, n, k-v[it].second, r, it+1);
        return AUX[it][k] = max(in, out);
    }

    return AUX[it][k] = out;

}


int main() {

    int T;
    cin >> T;

    for(int t = 0; t < T; ++t) {
        memset(AUX, -1, sizeof(AUX));

        int N;
        cin >> N;

        int X[N]; // poder de destruicao
        int Y[N]; // peso

        vector<pair<int, int>> XY;
        for(int i = 0; i < N; ++i) {
            int x, y;
            cin >> x >> y;
            XY.push_back(make_pair(x, y));
        }

        // cout << endl << endl;

        // sort by second value
        sort(XY.begin(), XY.end(), [](const pair<int,int> &a, pair<int,int> &b) {return a.second < b.second;});

        int K; // capacidade de carga do canhao
        cin >> K;
        int R; // resistencia do castelo
        cin >> R;

        int ans = DC(XY, N, K, R, 0);

        if(ans >= R) {
            cout << "Missao completada com sucesso" << endl;
        } else {
            cout << "Falha na missao" << endl;
        }

        // cout << endl << endl;

        for(int i = 0; i < 50; ++i) {
            for (int j = 0; j < 51; ++j) {
                cout << AUX[i][j] << " ";
            }
            cout << endl;
        }

    }

    return 0;
}
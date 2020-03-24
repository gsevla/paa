#include<bits/stdc++.h>

using namespace std;


int main() {

    int T;
    cin >> T;

    for(int t = 0; t < T; ++t) {

        int N;
        cin >> N;

        int X[N]; // poder de destruicao
        int Y[N]; // peso
        int XY[N][2];
        // memset(XY, -1, sizeof(XY));
        for(int i = 0; i < N; ++i) {
            cin >> XY[i][0] >> XY[i][1];
        }

        // for(int i = 0; i < N; ++i) {
        //     for(int j = 0; j < 2; ++j) {
        //         cout << XY[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        int K; // capacidade de carga do canhao
        cin >> K;
        int R; // resistencia do castelo
        cin >> R;

        // cout <<"LOADED" << endl;

    }

    return 0;
}
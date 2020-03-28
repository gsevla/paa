#include<bits/stdc++.h>

using namespace std;


int main() {

    int T;
    cin >> T;

    for(int t = 0; t < T; ++t) {

        int N;
        cin >> N;
        int X; // poder de destruicao
        int Y; // peso
        int K; // capacidade de carga do canhao
        int R; // resistencia do castelo

        int aux[55][105] = {0};

        for(int i = 1; i <= N; ++i) {
            cin >> X >> Y;
            for(int j = 1; j <= 101; ++j) {
                if(j < Y) {
                    aux[i][j] = aux[i-1][j];
                } else {
                    aux[i][j] = max(aux[i-1][j], aux[i-1][j-Y] + X);
                }
            }
        }

        cin >> K >> R;

        if(aux[N][K] >= R) {
            cout << "Missao completada com sucesso" << endl;
        } else {
            cout << "Falha na missao" << endl;
        }

    }

    return 0;
}
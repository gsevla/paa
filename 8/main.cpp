#include<bits/stdc++.h>

using namespace std;

int aux[2001][2001];
int it = 0;

int adh(int i, int n, int v, int C[], int V[]) {
    if (i == n || v == 0) return 0;
    
    if (v < 0)
        return INT_MIN;

    if (aux[i][v] == -1)
        aux[i][v] = max(adh(i + 1, n, v, C, V), V[i] + adh(i, n, v - C[i], C, V));

    return aux[i][v];
}


int main() {

    int N, T;

    while(cin >> N >> T) {

        int C[2001]; // lista de comprimentos
        int V[2001]; // lista de valores

        for(int i = 0; i < N; ++i) {
            cin >> C[i] >> V[i];
        }

        memset(aux, -1, sizeof aux);

        int res = adh(it, N, T, C, V);

        // for(int i = 0; i < T; ++i) {
        //     for(int j = 0; j < T; ++j) {
        //         cout << " " << aux[i][j];
        //     }
        //     cout << endl;
        // }

        cout << res << endl;

    }


    return 0;
}
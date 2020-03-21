#include <bits/stdc++.h> // import all

using namespace std;


int main() {
    int N, K; // qtde pessoas na fila e qtde grupos

    while(scanf("%d %d", &N, &K) != EOF) {
        int *d_pessoas;
        priority_queue <int> d_grupos;
        d_grupos.push(0);
        d_pessoas = (int*)malloc(N*sizeof(int));
        d_pessoas[0] = 0; // a primeira pessoa tem distância 0
        if(N > 1) {
            for(int i = 1; i < N; i++) {
                cin >> d_pessoas[i];
                // d_grupos[i] = d_pessoas[i] - d_pessoas[i-1];
                d_grupos.push(d_pessoas[i] - d_pessoas[i-1]);
            }
        }

        int *d; // distâncias dos grupos ordenada
        d = (int*)malloc(d_grupos.size()*sizeof(int));
        memset(d, 0, sizeof(int));
        int c = 0;
        while(!d_grupos.empty()) {
            d[c] = d_grupos.top();
            d_grupos.pop();
            c++;
        }

        int S = 0; // soma das menores distâncias entre K e N
        for(int i = K-1; i < N; i++) {
            S += d[i];
        }
        cout << S << endl;

        free(d_pessoas);
        free(d);
    }

    return 0;
}
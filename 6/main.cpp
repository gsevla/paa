#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int getLucro(int N, int *receita, int custo) {
    int MAX, MAX_TEMP = 0;
    for(int i=0;i<N;i++) {
        int lucro = receita[i] - custo;

        MAX_TEMP = max(0, MAX_TEMP + lucro);
        MAX = max(MAX, MAX_TEMP);
    }

    return MAX;
}

int main() {
    int N, custoPorDia;

    // value by day
    while(scanf("%d %d", &N, &custoPorDia) != EOF) {
        int *receita;
        receita = (int*) malloc(N*sizeof(int));

        for(int i=0;i<N;i++) {
            scanf("%d", &receita[i]);
        }

        int MAX = getLucro(N, receita, custoPorDia);
        cout << MAX << endl;
        free(receita);
    }

    return 0;
}
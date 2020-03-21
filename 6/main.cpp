#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int N, custoPorDia;

    // value by day
    // while(!cin.eof()) {
    while(scanf("%d %d", &N, &custoPorDia) != EOF) {
        // cin >> N >> custoPorDia;

        int receita[N];
        for(int i=0;i<N;i++) {
            cin >> receita[i];
            // cout << receita[i] << endl;
        }

        int MAX = 0;
        int MAX_TEMP = 0;
        for(int i = 0; i < N; i++) {
            int lucro = receita[i] - custoPorDia;

            MAX_TEMP = max(0, MAX_TEMP + lucro);
            // cout << "MAX_TEMP: " << MAX_TEMP << endl;
            MAX = max(MAX, MAX_TEMP);
            // cout << "MAX: " << MAX << endl;
        }

        cout << MAX << endl;
        // cout << "MAX: " << MAX << endl;
    }

    return 0;
}
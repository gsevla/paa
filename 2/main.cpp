#include<bits/stdc++.h>

using namespace std;


int main() {

    int N, D;

    while(cin >> N >> D, N && D) {
        char num[N];
        cin >> num;
        // for(int i = 0; i < N; ++i) {
        //     cout << num[i];
        // }
        // cout << endl;

        char res[N-D];
        // for(int i = 0; i < N-D; ++i) {
        //     cout << i+1 << endl;
        // }

        // cout << '-' << ": " << '-' - '0' << endl;
                
        pair<int, char> aux;
        for(int i = 0; i < D; ++i) {
            // aux.first = N-1;
            aux.second = max(num[0], num[N-1]);
            // cout << aux.second << endl;
            // cout << "i: " << i << endl;
            for(int j = N-1; j >= 0; --j) {
                if(num[j] == '-') {
                    continue;
                }
                // cout << num[j] - '0';
                if((num[j] - '0') <= aux.second) {
                    // cout << "entrou: " << num[j] << endl;
                    aux.first = j;
                    aux.second = num[j] - '0';
                }
            }
            // cout << endl;
            // cout << num[aux.first] << endl;
            num[aux.first] = '-';
        }

        // for(int i = 0; i < N; ++i) {
        //     cout << num[i];
        // }
        // cout << endl;

        for(int i = 0; i < D; ++i) {
            for(int j = 0; j < N; ++j) {
                if(num[j] != '-') {
                    res[i] = num[j];
                    ++i;
                }
            }
        }
 
        cout << res << endl;

    }

    return 0;
}
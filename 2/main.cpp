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

        // for(int i = 0; i < N-D; ++i) {
        //     cout << i+1 << endl;
        // }

        // cout << '-' << ": " << '-' - '0' << endl;
                
        int aux[N];
        memset(aux, -1, sizeof aux);
        int min_value = num[N-1] - '0';
        // cout << min_value << endl;
        int j = 0;
        for(int i = N-1; i >= 0; --i) {
            if(num[i] - '0' <= min_value) {
                min_value = num[i] - '0';
                aux[j] = i;
            }
            ++j;
        }

        for(int i = 0; i < N; ++i) {
            cout << aux[i] << " ";
        }
        cout << endl;
        // cout << num[aux[N-1]] << endl;

        char res[N-D];
        int auxRes = 0;
        int auxD = 0;
        int auxN = 1;
        
        for(int i = N-auxN; )

        break;
    }

    return 0;
}
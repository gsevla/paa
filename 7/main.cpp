#include<bits/stdc++.h>

using namespace std;


int main() {
    
    int T;
    cin >> T;

    int D, I, B;

    for(int i = 0; i < T; ++i) {

        cin >> D >> I >> B;

        int I_VALUES[I];
        for(int j =0; j < I; ++j) {
            cin >> I_VALUES[j];
        }

        int CUSTO_BOLOS[B];
        int AUX;

        for(int k = 0; k < B; ++k) {
            int DB;
            cin >> DB;
            AUX = 0;
            for(int j = 0; j < DB; j++) {
                int INDEX, AMO;
                cin >> INDEX >> AMO;
                AUX += I_VALUES[INDEX] * AMO;
            }
            CUSTO_BOLOS[k] = AUX;
        }
        
        int *r;
        r = min_element(CUSTO_BOLOS+0, CUSTO_BOLOS+B);
        cout << D/(*r) << endl;
    }
}
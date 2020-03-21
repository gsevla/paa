#include <bits/stdc++.h>

using namespace std;


int main() {

    string s1;
    string s2;

    while(getline(cin, s1) && getline(cin, s2)) {
        int i = 0;
        int j = s1.length()-1; // remove o /n
        int MAX = 0;

        if(s1.length() > 0 && s1.length() < 51 && s2.length() > 0 && s2.length() < 51) {
            while(s1.substr(i, j) != "") {
                while(i < j) {
                    string sub = s1.substr(i,j);
                    int m = sub.length();
                    if(s2.find(sub) != string::npos) {
                        MAX = max(MAX, m);
                    }
                    i++;
                }
                i = 0;
                j--;
            }
            cout << MAX << endl;
        }
    }

    return 0;
}
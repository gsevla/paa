#include <iostream>

using namespace std;

int count;

int fib(int n) {
    count += 1;
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin >> n;
    int test_cases[n];
    for(int i = 0; i < n; i++) {
        cin >> test_cases[i];
        count = 0;
        int f = fib(test_cases[i]);
        cout << "fib(" << test_cases[i] << ") = " << count-1 << " calls = " << f << endl;
    }

    // for(int i = 0; i < n; i++) {
    // }

    return 0;
}
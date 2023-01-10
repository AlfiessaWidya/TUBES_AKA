#include <iostream>

using namespace std;

int combination_iterative(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }

    int hasil = 1;
    for (int i = 0; i < r; i++) {
        hasil = hasil * (n-i) / (i+1);
    }
    return hasil;
}

int combination_recursive(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return combination_recursive(n-1, r-1) +
        combination_recursive(n-1, r);
    }
}

int main()
{
    cout << combination_iterative(50, 40) << endl;
    cout << combination_recursive(50, 40) << endl;
    return 0;
}

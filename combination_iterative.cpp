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
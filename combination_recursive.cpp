int combination_recursive(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return combination_recursive(n-1, r-1) +
        combination_recursive(n-1, r);
    }
}
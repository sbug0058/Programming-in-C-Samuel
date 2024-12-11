int sum(int *beg, int *fin) {
    int sumVal = 0;
    while (beg != fin) {
        sumVal += *(beg++);
    }
    return sumVal;
}

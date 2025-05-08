int hcf(int a, int b) {
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    while (min != 0) {
       int diff = max - min;
       max = min > diff ? min : diff;
       min = min < diff ? min : diff;
    }
    return max;
}
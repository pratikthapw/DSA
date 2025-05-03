void reverseString(char* s, int sSize) {
    for (int i = 0; i < sSize; i++) {
        char val = s[i];
        int j = sSize - i - 1;
        if (j < sSize / 2) {
            s[i] = s[j];
            s[j] = val;
        }
    } 
}
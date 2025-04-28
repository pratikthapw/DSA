#include <stdio.h>
#include <math.h>

int main() {
    int input = 20;
    int count = (int)log10(input);
    int result = 0;
    for(int i = 0; i <= count; i++) {
        int reverse = input % 10;
        result = result * 10 + reverse;
        input /= 10;
    }
    printf("%d", result);
    return 0;
}
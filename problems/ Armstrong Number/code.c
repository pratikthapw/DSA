#include <stdio.h>
#include <stdbool.h>

bool armstrong(int n) {
    int isArm = 0;
    int num = n;
    while (num > 0) {
        int digit = num % 10;
        isArm += digit * digit * digit;
        num /= 10;
    }
    
    return  n == isArm ? true : false;
}

int main() {
    bool result = armstrong(153);
    printf("Is Armstrong %d", result);
    return 0;
}


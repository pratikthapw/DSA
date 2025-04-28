#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    int input = x;
    if(input < 0) {
        return false;
    }
    int inputSize = (int) log10(input) + 1;
    long long int reversedInput = 0;
    for (int i = inputSize - 1; i >= 0; i--) {
        int rem = input % 10;
        reversedInput = reversedInput * 10 + rem;
        input /= 10;
    }
    if(x == reversedInput) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number = 121;
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
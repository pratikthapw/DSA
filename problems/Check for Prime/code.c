#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if(n == 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i < n; i++) {
        if(n % i == 0) return false;
        return true;
    }
}

int main() {
    bool result = isPrime(29);
    printf("Is Prime %s", result ? "true" : "false");

    return 0;
}
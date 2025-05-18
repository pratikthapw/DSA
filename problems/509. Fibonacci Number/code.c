// Recursive approach
int fib(int n){
    if(n <= 1) return n;
    int l = fib(n - 1);
    int sl = fib(n - 2);
    return sl + l;
}

// Iterative approach
int fib(int n){
    if(n <= 1) return n;
    int a = 0, b = 1;

    for(int i = 2; i < n; i++) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return a + b;
}
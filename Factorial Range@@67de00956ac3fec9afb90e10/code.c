long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
void factorialRange(int start, int end) {
    if (start > end) {
        printf("Invalid range\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        printf("Factorial of %d is %lld\n", i, factorial(i));
    }
}
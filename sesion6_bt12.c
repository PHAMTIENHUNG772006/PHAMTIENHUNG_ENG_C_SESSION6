#include <stdio.h>
long long fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int n;
    printf("nhap so phan tu day Fibonacci: ");
    scanf("%d", &n);
    printf("day Fibonacci gom %d phan tu: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%lld ", fibonacci(i)); 
    }

    return 0;
}


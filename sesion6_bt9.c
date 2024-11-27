#include <stdio.h>
#include <math.h>

int main() {
    int num, N1, N2, N3, sum;

   
    for (num = 100; num <= 999; num++) {
       
        N1 = num / 100; 
        N2 = (num / 10) % 10;  
       N3 = num % 10;  
       
        sum = N1*N1*N1 + N2*N2*N2 + N3*N3*N3;

        if (sum == num) {
            printf("%d ", num);  
        }
    }

    return 0;
}


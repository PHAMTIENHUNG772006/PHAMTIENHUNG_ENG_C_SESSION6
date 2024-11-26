#include<stdio.h>
int main(){
	int n;
	printf(" moi ban nhap so nguyen ");
	scanf("%d", &n);
	if(n % 3 == 0 && n % 5 == 0){
		 printf("FizzBuzz\n", n);
	}else if (n % 3 == 0) {
        printf("Fizz\n", n);
    } else if (n % 5 == 0) {
        printf("Buzz\n", n);
    }
    return 0;
}

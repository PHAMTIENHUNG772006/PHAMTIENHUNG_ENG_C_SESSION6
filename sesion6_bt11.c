#include<stdio.h>
#include<math.h>
int main(){
	int n, count = 0, number = 0, prime=2;
	printf("moi ban nhap soluong so nguyen to n : ");
	scanf("%d", &n);
	while(number<n){
		count=0;
		for(int i=1;i<sqrt(prime);i++){
			if(prime%i==0){
				count++;
			}
		}
		if(count==2){
			printf("\n so nguyen to %d :", prime);
			number++;
		}
		prime++;
	}
	return 0;
}

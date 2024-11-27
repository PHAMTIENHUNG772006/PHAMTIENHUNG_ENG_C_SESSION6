#include<stdio.h>
int main(){

int a = 0, b = 1, n;
printf(" moi ban nhap n fibonacci can tim :");
scanf("%d", n);
printf("day fibonacci %d so gom", n);
for(i=1;i<=n;i++){
	if(i==1){
		printf("%d", a);
		
	} else if {
	printf("%d", b);	
	} else{
		n = a + b;
		printf("%d", n);
		a=b;
		b=n;
	}
}
printf("\n");
return 0;
}


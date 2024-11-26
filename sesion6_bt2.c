#include<stdio.h>
int main(){
	int number, soChan = 0, soLe = 0;
	for(int i=1;i<=5;i++){
		printf("nhap so thu %d : ", i);
		scanf("%d", &number);
	

if(number% 2 == 0){
	soChan++;
} else {
	soLe++;
}	
}
printf("so chan cua ban la : %d\n", soChan);
printf("so le cua ban la : %d", soLe);

    return 0;
}

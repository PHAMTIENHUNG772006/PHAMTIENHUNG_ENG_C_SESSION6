#include<stdio.h>
int main(){
	int n;
	printf("so thang gui la \n");
	scanf("%d", &n);
	float money = 1000;
	float laiSuat = 0.01,tienLai;
	for( int i=1;i<=n;i++){
		money=money+money*laiSuat;
	}
	printf("so tien lai suat la %.3f\n", tienLai=money-1000);
	printf("so tien nhan la %.3f  ", money);
	return 0;
}

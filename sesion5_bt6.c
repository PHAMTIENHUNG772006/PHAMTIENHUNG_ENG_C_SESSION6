#include<stdio.h>
#include<stdlib.h>
	int n, m, tong, hieu, tich, thuong;
	int choice;

	int main() {
		while(1) {
		   printf("*********MENU**********");
	       printf("\n1.tong hai so");
	       printf("\n2.hieu hai so");
	       printf("\n3.tich hai so");
	       printf("\n4.thuong hai so");
	       printf("\n5.thoat");
	       printf("so ban chon  la: ");
	       scanf("%d", &choice);
	
	switch(choice) {
		  case 1:
	    	printf("moi ban nhap so nguyen thu nhat");
         	scanf("%d", &n);
        	printf("moi ban nhap so nguyen thu nhat");
        	scanf("%d", &m);
            tong = n + m;
	        printf("tong cua %d va %d = %d\n", n ,m , tong);
		break;
		  case 2:
		  	
		  	printf("moi ban nhap so nguyen thu nhat");
	        scanf("%d", &n);
	        printf("moi ban nhap so nguyen thu nhat");
        	scanf("%d", &m);
            hieu = n - m;
	        printf("hieu cua %d va %d = %d\n", n, m, hieu);	  
		
	    break;
		  case 3:
		  	
	       printf("moi ban nhap so nguyen thu nhat");
	       scanf("%d", &n);
	       printf("moi ban nhap so nguyen thu nhat");
	       scanf("%d", &m);
           tich = n * m;
	       printf("tich cua %d va %d = %d\n", n ,m ,tich);
		break;
		  case 4:
		
	       printf("moi ban nhap so nguyen thu nhat\n");
	       scanf("%d", &n);
	       printf("moi ban nhap so nguyen thu nhat\n");
	       scanf("%d", &m);
	       if(m != 0){
		   thuong = n / m;
           printf("thuong cua %d va %d = %d\n", n, m, thuong);
	}   else{
		printf(" khong the chia het cho 0 \n");
	}
		break;
		  case 5:
		   printf("thoat chuong trinh.....\n");
		   exit(0);
		break;
		default:
		   printf("chon sai roi hay tron lai\n");	
	    }
    }	
	return 0;	
	}

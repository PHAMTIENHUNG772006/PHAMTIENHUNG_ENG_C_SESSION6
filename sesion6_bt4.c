#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap he so a, b, c cua phuong trinh bac hai (ax^2 + bx + c = 0): \n");
    printf(" so a = ");
    scanf("%f", &a);
    printf(" so b = ");
    scanf("%f", &b);
    printf(" so c = ");
    scanf("%f", &c);
    if( a < 0){
    	printf("day khong phai phuong trinh bac hai");
	}
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("phuong trinh co nghiem kep x = %.2f\n", x1);
    } else {
        printf("phuong trinh vo nghiem trong tap hop so thuc\n");
    }

    return 0;
}


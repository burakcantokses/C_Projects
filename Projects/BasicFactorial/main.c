#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int faktoriyel = 1;
	int sayi, i;
	printf("faktoriyelini alacaginiz sayiyi girin: "); scanf("%d", &sayi);
	for (i=sayi; i>0; i--) {
		faktoriyel *= i;
	}
	printf("\nSonuc: %d", faktoriyel);
	return 0;
}

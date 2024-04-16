#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi, us;
	int sonuc = 1;
	int i;
	printf("Sayiyi girin: "); scanf("%d", &sayi);
	printf("\nUssu girin: "); scanf("%d", &us);
	for (i=1; i<=us; i++) {
		sonuc *= sayi; 
	}
	printf("\nSonuc: %d", sonuc);
	return 0;
}

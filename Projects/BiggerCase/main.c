#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // toupper için yazýldý
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char harf;
	FILE *dosya;
	printf("Harf girin: ");
	scanf(" %c", &harf);
	harf = toupper(harf);
	
	dosya = fopen("harf.txt", "w");
	fprintf(dosya, "%c", harf);
	fclose(dosya);
	printf("Buyuk harf yazildi.");
	
	return 0;
}ß

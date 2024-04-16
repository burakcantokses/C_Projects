#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //tolower için eklendi.


int main(int argc, char *argv[]) {
	float celcius, fahrenheit;
	char secim;
	
	printf("[A] - Celcius -> Fahrenheit");
	printf("\n[B] - Fahrenheit -> Celcius");
	
	printf("\nSecim yapiniz: "); scanf("%c", &secim);
	secim = tolower(secim);
	printf("%c", secim);
	
	switch(secim) {
		case 'a':
			system("cls");
			printf("Celcius degerini girin: "); scanf("%f", &celcius);
			fahrenheit = celcius * 1.8 + 32;
			printf("\n%f celcius degerinin fahrenheit degeri: %f", celcius, fahrenheit);
			break;
		case 'b':
			system("cls");
			printf("Celcius degerini girin: "); scanf("%f", &fahrenheit);
			fahrenheit = (celcius - 32) / 1.8;
			printf("\n%f fahrenheit degerinin celcius degeri: %f", fahrenheit, celcius);
			break;
		default:
			printf("Gecersiz secim.");
			break;
	}
	
	return 0;
}

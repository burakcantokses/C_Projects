#include <stdio.h>
#include <stdlib.h>

void factorialCalculate(int number);

int main(int argc, char *argv[]) {
    char choice;
    int number;
    while(1) {
        system("cls");
        printf("Bir sayi girin: "); 
        scanf("%d", &number);
        printf("\n");
        factorialCalculate(number);
        printf("\n--------------------------\n");
        printf("Devam etmek istiyor musun? [E]/[H]: ");
        scanf(" %c", &choice);
        if (choice == 'H' || choice == 'h') {
            printf("Cikis yapildi.\n");
            break;
        }
        if (!(choice == 'E' || choice == 'e')) {
            printf("Gecersiz bir secim yaptiniz.\n");
        }
    }
    return 0;
}

void factorialCalculate(int number) {
    int result = 1;
    int i;
    
    for (i = number; i > 1; i--) {
        result *= i;
    }
    printf("Sonuc: %d\n", result);
}


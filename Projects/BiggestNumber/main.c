#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>

int getLowerNumber();
int getBiggestNumber();
void getLowerNumberMenu();
void getBiggestNumberMenu();
void menu();

int main(int argc, char *argv[]) {
	menu();
	return 0;
}

void menu() {
    char choice;
    while(1) {
        system("cls");
        printf("[A] - Dizideki en kucuk sayiyi bul.\n");
        printf("[B] - Dizideki en buyuk sayiyi bul.\n");
        printf("[C] - Dizideki benzer sayilari bul.\n");
        printf("[D] - Dizideki asal sayilari bul.\n");
        printf("[E] - Tek-Cift olarak ayir.\n");
        printf("Bir menu harfi tuslayin: ");
        scanf(" %c", &choice);
        choice = tolower(choice);
        if (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'e') {
            printf("Gecerli bir secim yapin.\n");
            Sleep(1000);
            continue;
        }
        
        switch(choice) {
        	case 'a':
        		getLowerNumberMenu();
        		break;
        	case 'b':
        		getBiggestNumberMenu();
        		break;
        	case 'c':
        		getSameNumbersMenu();
        		break;
        	case 'd':
        		break;
        	case 'e':
        		break;
        	default:
        		printf("Bilinmeyen bir hata olustu. Az sonra tekrar deneyin.");
        		Sleep(1000);
        		break;
		}
    }
}

int getSpecialNumbers(int numbers[], int length) {
	int i;
	int specialNumbers[length];
	int specialCounter = 0;
	for (i=0; i<length; i++) {
		if (numbers[i] )
	}
}

int getSameNumbers(int numbers[], int length) {
	int i,j;
	int mostSameNumberId = 0;
	int sameNumberCounter = 0;
	int tempNumberCounter = 0;
	for (i=0; i<length; i++) {
		for (j=0; j<length; j++) {
			if (numbers[i] == numbers[j]) {
				tempNumberCounter++;
			}
		}
		if (tempNumberCounter > sameNumberCounter) {
			mostSameNumberId = i;
			sameNumberCounter = tempNumberCounter;
		}
		tempNumberCounter = 0;
	}
	return numbers[mostSameNumberId];
}

void getSameNumbersMenu() {
	int length;
    int i;
    int sameNumber;
    system("cls");
    printf("Dizideki benzer sayilari bulma ekranina hosgeldin! \nDizinin uzunlugunu girin: ");
    scanf("%d", &length);
    int numbers[length];
    for (i = 0; i < length; i++) {
        printf("\n%d. sayinizi girin: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("\n-------------------------\n");
    for (i = 0; i < length; i++) {
        if (i != 0) {
            printf(" - %d", numbers[i]);    
        } else {
            printf("%d", numbers[i]);
        }
    }
    sameNumber = getSameNumbers(numbers, length);
    printf(" | Dizisinde en cok tekrar eden elemani: %d", sameNumber);
    Sleep(2000);
	printf("\n\nHerhangi bir tusa basin ve anamenuye gidin.");
	getch();
    menu();
}

void getLowerNumberMenu() {
    int length;
    int i;
    int lowerNumber;
    system("cls");
    printf("Dizideki en kucuk sayiyi bulma ekranina hosgeldin! \nDizinin uzunlugunu girin: ");
    scanf("%d", &length);
    int numbers[length];
    for (i = 0; i < length; i++) {
        printf("\n%d. sayinizi girin: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("\n-------------------------\n");
    for (i = 0; i < length; i++) {
        if (i != 0) {
            printf(" - %d", numbers[i]);    
        } else {
            printf("%d", numbers[i]);
        }
    }
    lowerNumber = getLowerNumber(numbers, length);
    printf(" | Dizisinin en kucuk elemani: %d", lowerNumber);
    Sleep(2000);
	printf("\n\nHerhangi bir tusa basin ve anamenuye gidin.");
	getch();
    menu();
}

int getLowerNumber(int numbers[], int length) {
    int i;
    int lowerNumber = numbers[0];
    for (i = 0; i < length; i++) {
        if (numbers[i] < lowerNumber) {
            lowerNumber = numbers[i];
        }
    }
    
    return lowerNumber;
}

void getBiggestNumberMenu() {
    int length;
    int i;
    int biggestNumber;
    system("cls");
    printf("Dizideki en buyuk sayiyi bulma ekranina hosgeldin! \nDizinin uzunlugunu girin: ");
    scanf("%d", &length);
    int numbers[length];
    for (i = 0; i < length; i++) {
        printf("\n%d. sayinizi girin: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("\n-------------------------\n");
    for (i = 0; i < length; i++) {
        if (i != 0) {
            printf(" - %d", numbers[i]);    
        } else {
            printf("%d", numbers[i]);
        }
    }
    biggestNumber = getBiggestNumber(numbers, length);
    printf(" | Dizisinin en buyuk elemani: %d", biggestNumber);
    Sleep(2000);
	printf("\n\nHerhangi bir tusa basin ve anamenuye gidin.");
	getch();
    menu();
}

int getBiggestNumber(int numbers[], int length) {
	int i;
	int biggestNumber = numbers[0];
	for (i=0; i < length; i++) {
		if (numbers[i] > biggestNumber) {
			biggestNumber = numbers[i];
		}
	}
	
	return biggestNumber;
}

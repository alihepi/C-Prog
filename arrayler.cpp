#include<stdio.h>
#include<conio.h>

int main() {
	
	float toplam= 0.0;
	
	int i;
	float sayilar[5];
	
	for(i=0; i<5; i++) {
		printf("Bir sayi giriniz: ");
		scanf("%f", &sayilar[i]);
	}
	
	for (i=0; i<5; i++) {
		toplam += sayilar[i];
	}
	
	printf("Girdiginiz sayilarin toplami %.2f dir", toplam);
	
	getch();
	return 0;
}

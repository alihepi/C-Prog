/*Kullanicinin Girdiði Sayinin Asal Olup Olmadýðýný Söyleyen Programý Fonksiyon kullanarak tanýmlama*/

#include<stdio.h>
#include<conio.h>


int asalsayi (int sayi) {
	
	int i;
	
	for (i=2; i<sayi; i++) {
		if (sayi % i == 0) {
			return 0;
		}
		
	}
	
	return 1;	
	
}


int main() {
	
	int n;

	printf("\n\tLutfen bir sayi giriniz: "); scanf("%d", &n);	
	
		if(asalsayi(n)==0){
			printf("\n\tGirdiginiz Sayi Asal Degildir");
		}
		
		else if (asalsayi(n)==1){
			printf("\n\tGirdiginiz Sayi Asaldir");
		}
	
	
	
	getch();
	return 0;
}

#include<stdio.h>
#include<conio.h>


int max(int *a, int uzunluk){
	
	int maks = a[0];
	int i;
	
	for (i=1; i<uzunluk; i++) {
		if(a[i] > maks) {
			maks=a[i];
		}
	}
	
	
	return maks;
}





int main() {
	
	int sayilar[5];
	int i;
	
	printf("5'lik sayi dizinizin elemanlarini giriniz:\n");
	
	for (i=0; i<5; i++) {
		scanf("%d",&sayilar[i]);
	}
	
	int maks = max(sayilar,5);
	
	printf("Sayilar dizinizin en buyuk elemani: %d", maks);
		
	
	getch();
	return 0;
}

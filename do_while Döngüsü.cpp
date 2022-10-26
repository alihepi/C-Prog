#include<stdio.h>
#include<conio.h>

int main() {
	
	int n, hane=0, toplam=0;
	
	printf("\n\tLutfen sayi giriniz: "); scanf("%d", &n);
	
		do {
			toplam += (n%10);
			hane++;
			
			n = n/10;
		}
		
		while(n>0);
		
		printf("\n\tRakamlari toplami %d  %d haneli", toplam,hane);
	
	getch();
	return 0;	
}

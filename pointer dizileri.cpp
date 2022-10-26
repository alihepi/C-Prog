#include<stdio.h>
#include<conio.h>

char *gunismi(char *gundizisi[], int uzunluk, int hangigun){
	
	if (hangigun>=1 && hangigun<=7){
		return gundizisi[hangigun-1];
	}
	
	else {
		return NULL;
	}
	
}

int main() {
	
	char *gunler[7]={"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
	int g;
	
	printf("Gun icin bir sayi giriniz:  "); scanf("%d",&g);
	
	char *p=gunismi(gunler,7,g);
	
	if (p == NULL){
		printf("NULL");
	}
	else {
		printf("%s",p);
	}
	
	
	getch();
	return 0;
}

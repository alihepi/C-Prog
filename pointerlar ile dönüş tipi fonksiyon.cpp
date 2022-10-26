#include<stdio.h>
#include<conio.h>
#include<string.h>

//	int *p= NULL;
		// NULL ya da 0 yazýlabillir
		
		
char *dondur(char *p, int indeks) {
	
	int uzunluk=strlen(p);
	
	if(indeks>uzunluk){
		return NULL;
	}
	else {
		return p+indeks;
	}
	
}		
		

int main() {
		
	char dizi[]="yazilim";
	float a;
	
	printf("\n\t Lutfen bir sayi giriniz:  "); scanf("%f",&a);
	
	char *p=dondur(dizi,a);
	
			printf("\n\n\t - ");
	
	if(p==NULL){
		printf("pointer NULL");
	}
	else {
		printf("%s",p);
	}
	
	
	getch();
	return 0;
}

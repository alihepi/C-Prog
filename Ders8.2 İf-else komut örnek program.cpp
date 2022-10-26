#include<stdio.h>
#include<conio.h>

int main() {
	
	int vize,final;
	float ort;
	
	
	printf("\n\n\t Vize notunuzu giriniz:"); scanf("%d", &vize);
	printf("\t Final notunuzu giriniz:"); scanf("%d", &final);
	
		ort = ((vize*(0.4)) + (final*0.6));
	
	if (ort >= 50) {
		printf("\n\t Dersten Gectiniz :) \n\n\t");
	}

	if (ort < 50) {
		printf("\n\t Dersten Kaldiniz :'( \n\n\t");
	}
	
	getch();
	return 0;
}

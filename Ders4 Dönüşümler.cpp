#include<stdio.h>

int main() {
	
	/*
	Otomatik Dönüþüm Çizelgesi:
	char 
	short ----->>>> int ----->>>> float ----->>>> double ----->>>> long
	                                                               double
	*/
	
	
	
	/* Otomatik Dönüþüm Örneði:
		Not: %5.f virgülden sonraki 5 basamaðýn görüneceðini söyler */
	
	int x=3;
	float y=0.8;
	
	printf("%.2f",x/y);
	
	return 0;
	
}

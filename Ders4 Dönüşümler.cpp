#include<stdio.h>

int main() {
	
	/*
	Otomatik D�n���m �izelgesi:
	char 
	short ----->>>> int ----->>>> float ----->>>> double ----->>>> long
	                                                               double
	*/
	
	
	
	/* Otomatik D�n���m �rne�i:
		Not: %5.f virg�lden sonraki 5 basama��n g�r�nece�ini s�yler */
	
	int x=3;
	float y=0.8;
	
	printf("%.2f",x/y);
	
	return 0;
	
}

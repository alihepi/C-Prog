#include<stdio.h>

int main() {

	int i=5;
	
	int *p = &i;
		// " * " i�areti pointerlar� tan�mlarken kullan�l�r
		// " & " i�areti adresi verir
		// pointerlar�n alaca�� de�er hangi tipte ise pointerlarda o tipte olmak zorundad�r
		
	printf("%p",p);
		// Pointerler "%p" ve "%u" olmak �zere iki tipte ��k�� alabilirler
		

		printf("\n\n"); // birbirne kar��mamas� i�in pointerlardan alakas�z sat�r	
	printf("%d",*p);
		// Pointerlerda " * " i�aretinin b�yle kullan�m� adresteki de�eri verir


	return 0;

}

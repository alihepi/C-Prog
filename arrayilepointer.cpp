#include<stdio.h>
#include<conio.h>

int main() {
	
	int sayilar[5]={1,2,3,4,5};
	
	int *p=sayilar;
		//*p=&sayilar[0] ile ayn�d�r
		
	printf("%u\n",p);
	printf("%u",p+1);
	
		// 4 byte artmas�n�n sebebi int degerlerinin 4 byte kadar olmas�d�r
		
		printf("\n\n");
		
		
	printf("%d\n",*p);
	printf("%d\n",*(p+1));
		// elemanlar� g�rmek i�in kullanabiliriz
			// *(p+1) =>> ofset olarak tan�mlan�r
			
		printf("\n\n");		
		// *(p+1) --->>> ile p[1] ayn� i�lemi yapar
		
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);	
	
	getch();
	return 0;
}

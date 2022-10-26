#include<stdio.h>
#include<conio.h>

int main() {
	
	int sayilar[5]={1,2,3,4,5};
	
	int *p=sayilar;
		//*p=&sayilar[0] ile aynýdýr
		
	printf("%u\n",p);
	printf("%u",p+1);
	
		// 4 byte artmasýnýn sebebi int degerlerinin 4 byte kadar olmasýdýr
		
		printf("\n\n");
		
		
	printf("%d\n",*p);
	printf("%d\n",*(p+1));
		// elemanlarý görmek için kullanabiliriz
			// *(p+1) =>> ofset olarak tanýmlanýr
			
		printf("\n\n");		
		// *(p+1) --->>> ile p[1] ayný iþlemi yapar
		
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);	
	
	getch();
	return 0;
}

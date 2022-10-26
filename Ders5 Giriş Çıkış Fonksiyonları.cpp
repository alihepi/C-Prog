
	/*	
	printf ve scanf
		
		float bir de�er olan x'i ekrana yazd�rmak i�in "printf("%f",x);" �eklinde giriyoruz
		Benzer bir �ekilde x'i kullanc�dan isteyip ekrana yazd�rmak istersek bu sefer "scanf" komutunu kullan�yoruz
		"&" simgesi ise kullan�can istenen de�eri atamak i�in kullan�l�r
		�rne�in: "scanf("%f",&x);" �eklinde yaz�l�r
		Di�er format belirleyicileri "printf" ile ayn�d�r
	*/
	
	/* A�a��da kullan�c�dan istenen bir yar��ap ile bir k�renin hacmini hesaplama yapaca��z */

#include<stdio.h>
#include<conio.h>
#define PI 3.14
/* #define komutunu bir de�eri tan�mlamak i�in kullan�l�r */

int main() {
	
	int yaricap;
	float hacim;
	
	/* C programlama dilinde tan�mlamal� mainden hemen sonra yapmak zorunday�z*/
	
	printf("Kurenin yaricapini giriniz:");
	scanf("%d",&yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %.2f 'dir", hacim);


	getch ();
	return 0;

}

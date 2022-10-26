
	/*	
	printf ve scanf
		
		float bir deðer olan x'i ekrana yazdýrmak için "printf("%f",x);" þeklinde giriyoruz
		Benzer bir þekilde x'i kullancýdan isteyip ekrana yazdýrmak istersek bu sefer "scanf" komutunu kullanýyoruz
		"&" simgesi ise kullanýcan istenen deðeri atamak için kullanýlýr
		Örneðin: "scanf("%f",&x);" þeklinde yazýlýr
		Diðer format belirleyicileri "printf" ile aynýdýr
	*/
	
	/* Aþaðýda kullanýcýdan istenen bir yarýçap ile bir kürenin hacmini hesaplama yapacaðýz */

#include<stdio.h>
#include<conio.h>
#define PI 3.14
/* #define komutunu bir deðeri tanýmlamak için kullanýlýr */

int main() {
	
	int yaricap;
	float hacim;
	
	/* C programlama dilinde tanýmlamalý mainden hemen sonra yapmak zorundayýz*/
	
	printf("Kurenin yaricapini giriniz:");
	scanf("%d",&yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %.2f 'dir", hacim);


	getch ();
	return 0;

}

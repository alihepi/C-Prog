#include<stdio.h>
#include<conio.h>
#include<math.h>

	int a,b,c;
	float diskriminant,x1,x2;
	string koktoplam,kokcarpim;

int main() {
	
	printf("\n\t >> ax^2 + bx + c ikinci dereceden denkleminin Diskriminant(Delta) ve Kök (x1 ve x2) degerleri icin a,b ve c 'yi giriniz\n");
	printf("\n\ta:"); scanf("%d", &a);
	printf("\tb:"); scanf("%d", &b);
	printf("\tc:"); scanf("%d", &c);	
	
	printf("\n\tDenklem: (%d)x^2 + (%d)x + (%d)", a,b,c);
	printf("\n\tDegerleri gormek icin herhangi bir tusa basiniz\n");
	getch();
	
		diskriminant = pow(b,2)+((-4)*(a)*(c));
		x1 = ((-b) - (sqrt(diskriminant))) /(2*a);
		x2 = ((-b) + (sqrt(diskriminant))) /(2*a);
		koktoplam = ((-1*b)/(a*1));
		kokcarpim = ((1*b)/(a*1));
	
	
	if(diskriminant < 0) printf("\n\n\t >>>Reel Kok Yoktur!.. (Delta<0) \n\n\t\t Diskriminant(Delta) : %.2f ",diskriminant);
	if(diskriminant == 0) printf("\n\n\t >>>Cakisik Kokler vardýr.(Delta=0) \n\n\t\t Diskriminant(Delta) : %.2f \n\t\t Birinci Kok (x1)) : %.2f \n\t\t Inikinci Kok (x2) : %.2f \n\t\t Kokler Toplami: %.2f \n\t\t Kokler Carpimi: %.2f",diskriminant,x1,x2,koktoplam,kokcarpim);
	if(diskriminant > 0) printf("\n\n\t >>>Iki Farkli Kok Vardir.(Delta>0) \n\n\t\t Diskriminant(Delta) : %.2f \n\t\t Birinci Kok (x1) : %.2f \n\t\t Inikinci Kok (x2) : %.2f \n\t\t Kokler Toplami: %.2f \n\t\t Kokler Carpimi: %.2f",diskriminant,x1,x2,koktoplam,kokcarpim);
	getch();
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t by_alihappy\n\n\n");
	getch();

	return 0;
	
}

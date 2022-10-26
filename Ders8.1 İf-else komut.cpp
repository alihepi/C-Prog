#include<stdio.h>

/*bool veritipi - sadece true ya da false alýr*/
/* Örnek program*/

int main(){
	
	int note;
	printf("\n\t Notunuzu Giriniz:");
	scanf("%d", &note);
	
	if (note > 60) {		
		/*Bu iki süslü parantez (blok) arasýna koþul true (doðru) çýkarsa yapýlacak iþlemler */		
		printf("\n\t Dersten gectiniz :) \n");
	}
	
	else if (note >= 50) {
		/* if olduðu  zaman her zaman dener ama alse if olursa if in çalýþmadýðý durumlarda gelir */
		printf("\n\t Dersten Bute kaldiniz.");
	}
	
	else {		
		/* if bloðuna girmediði durumda anlamýnda denilebilir */	
		printf("\n\t Dersten Kaldiniz :( \n");		
	}	
		
	return 0;
}



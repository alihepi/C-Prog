#include<stdio.h>

/*bool veritipi - sadece true ya da false al�r*/
/* �rnek program*/

int main(){
	
	int note;
	printf("\n\t Notunuzu Giriniz:");
	scanf("%d", &note);
	
	if (note > 60) {		
		/*Bu iki s�sl� parantez (blok) aras�na ko�ul true (do�ru) ��karsa yap�lacak i�lemler */		
		printf("\n\t Dersten gectiniz :) \n");
	}
	
	else if (note >= 50) {
		/* if oldu�u  zaman her zaman dener ama alse if olursa if in �al��mad��� durumlarda gelir */
		printf("\n\t Dersten Bute kaldiniz.");
	}
	
	else {		
		/* if blo�una girmedi�i durumda anlam�nda denilebilir */	
		printf("\n\t Dersten Kaldiniz :( \n");		
	}	
		
	return 0;
}



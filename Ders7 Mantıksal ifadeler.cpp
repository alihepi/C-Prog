#include<stdio.h>

/*
	Mantýksal Ýfadeler:
	
	doðru ise "true"
	yanlýþ ise "false"
	
	Not: Bütün sýfýr olmayan sayýlar "True" deðer olarak görülür
	Not: "0" ise "false" deðerdedir
	
	<    ,  küçük mü?
	>    ,  büyük mü?
	<=   ,  küçük ya da eþit mi?
	>=   ,  büyük ya da eþit mi?
	==   ,  eþit mi?
	!=   ,  eþit deðil mi?
	
	
	Mantýksal Baðlaçlar:
	
	&&   ,  (and) "ve" baðlacý olarak	kullanýlýr
	
	||   ,  (or) "ya da" baðlacý olarak kullanýlýr
	
	!    ,  (not) "deðil" baðlacý olarak kullanýlýr
			-->> "true" ise "false"
			-->> "false" ise "true" yapar
				 

	a = x > y ? x : y;
	
		"?" "ise" anlamý katar
		":" "deðilse" anlamý katar				 
	
*/

int main() {
	
	int a,b,c;
	
	printf("\n\t b ve c sayilarini giriniz.");
	printf("\n\t Not: b>c ise ekrana c, b<c ise ekrana b yazacak");
	printf("\n\n\t b:");	scanf("%d", &b);
	printf("\t c:");	scanf("%d", &c);
	
	a = b<c ? b : c;
	printf("\n\n\t Cevap: %d",a);	
	

	return 0;
}





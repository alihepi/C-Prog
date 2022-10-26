#include<stdio.h>

/*
	Mant�ksal �fadeler:
	
	do�ru ise "true"
	yanl�� ise "false"
	
	Not: B�t�n s�f�r olmayan say�lar "True" de�er olarak g�r�l�r
	Not: "0" ise "false" de�erdedir
	
	<    ,  k���k m�?
	>    ,  b�y�k m�?
	<=   ,  k���k ya da e�it mi?
	>=   ,  b�y�k ya da e�it mi?
	==   ,  e�it mi?
	!=   ,  e�it de�il mi?
	
	
	Mant�ksal Ba�la�lar:
	
	&&   ,  (and) "ve" ba�lac� olarak	kullan�l�r
	
	||   ,  (or) "ya da" ba�lac� olarak kullan�l�r
	
	!    ,  (not) "de�il" ba�lac� olarak kullan�l�r
			-->> "true" ise "false"
			-->> "false" ise "true" yapar
				 

	a = x > y ? x : y;
	
		"?" "ise" anlam� katar
		":" "de�ilse" anlam� katar				 
	
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





#include<stdio.h>
#include<conio.h>

int main() {

	int a1 = 42;
	char b1 = 66;
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.21;
	
	printf("%s\n %s %d\n %s %c\n %s %d\n %s %.2f\n %s %.2f\n \n\t%s\n", "Deneme1","a1 =",a1,"b1 =",b1,"b2 =",b2,"c1 =",c1,"d1 =",d1,"deneme basarili :)");


	/*
		"char" veritipi 1byte (8bit)'lik yer kaplar 0'dan 255'e kadar deger alabilir. (0,2^8) (Her bir deger ASCII tablosundaki değere gore belirlenir)
		"int" veritipi 4byte (32bit)'lik yer kaplar -(2^16)'dan +(2^16)'ya kadar deger alir. (tamsayi)
		"short" veritipi (short int) -(2^8)'den +(2^8)'e deger alir bir nevi int ile aynidir. (tamsayi)
		"long" veritipi (long int) -(2'32)'den +(2^32)'ye kadar deger alabilir. (tamsayi)
		"float" veritipi kesirli sayilari tutmak için kullanilir.
		"double" veritipi daha uzun kesirli sayilar için kullanılır.
	
		Degisken tanimlama nasil yapilir?	
		veritipi degisken_adi;	
			
		/*	Format belirleyiciler
		
		%d --->>> int değerler için "printf"te format belirleyici olarak kullanılır
			Ornek
			int x=5;
			printf("%d"x);  --->>> Ekrana 5 degeri yazdirilir
			
		%f --->>> float ve double için format belirleyici olarak kullanılır
			Ornek
			folat f=3,5;
			double d=4,22;
			printf("%f %f",f,d); --->>> Degiskenleri girme sirasina göre ekrana yazar
			not: %.1f yazdığımız zaman virgülden sonraki bir basamğı alır!
		
		%c --->>> karakterler icin kullanilir
			Ornek
			char c1='c';
			printf("%c",c1); --->>> Ekrana "c" yi basar
			printf("%dé,c); --->>> Ekrana ASCII tablosundaki c degerini basar
		
		%s --->>> karakter dizileri için kullanilir
		
			Ornek
			printf("%s","alihappy"); --->>> Ekrana alihappy yazar.

			Not: printf("%d byte\n", sizeof(int)); --->>> Ekrana int'in kaç byte oldugunu yazar
	*/


	getch ();


	return 0;

}

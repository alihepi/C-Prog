#include<stdio.h>
#include<conio.h>

struct student {
	
	char name[20];
	char surname[20];
	int number;
	
};


int main() {
	
	struct student students[3];
	int i;
	
	for(i=0; i<3; i++) {
		printf("%d Ogrencinin bilgilerini giriniz\n",(i+1));
		printf("Ogrencinin Adi      : "); scanf("%s",&students[i].name);
		printf("Ogrencinin Soyadi   : "); scanf("%s",&students[i].surname);
		printf("Ogrencinin Numarasi : "); scanf("%d",&students[i].number);
		
		printf("\n");
	}
	
	printf("----------------------------------------------\n\n");
	
	for(i=0; i<3; i++) {
		printf("%d Ogrencinin bilgileri\n",(i+1));
		printf("Ogrencinin Adi      : %s\n", students[i].name);
		printf("Ogrencinin Soyadi   : %s\n", students[i].surname);
		printf("Ogrencinin Numarasi : %d\n", students[i].number);
		
		printf("\n\n");
	}
	
	
	
	getch();
	return 0;
}

#include<string.h>
#include<stdio.h>
#include<conio.h>

int main() {
	
	char veri[25]="Ali Mutlu";
	int uzunluk=strlen(veri);
	int i;
	
	FILE *file_pointer = fopen("hepi.txt","w");
	
	if (file_pointer == NULL){
		printf("Dosya Olusturulamadi");
	}
		else{
			for(i=0; i<uzunluk; i++){
				fputc(veri[i], file_pointer);
				printf("Yazdirilan Karakter %c\n",veri[i]);
			}
			printf("Dosya Basariyla Olusturuldu");
		}
	
	
	
	
	getch();
	return 0;
}

#include<stdio.h>
#include<conio.h>

int main() {
	
	char text[250];
	
	FILE *file_pointer = fopen("deneme.txt","a");
	
	if (file_pointer == NULL){
		printf("Dosya Olusturulamadi");
	}
		else {
			printf("Bir seyler yazin: ");
			fgets(text,250, stdin);
			fputs(text,file_pointer);
			
			printf("Dosyaya Yazildi");
			
			fclose(file_pointer);
		}
	
	
	getch();
	return 0;
}

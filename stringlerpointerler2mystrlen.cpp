#include<stdio.h>
#include<conio.h>
#include<string.h>

int mystrlen(char *p){
	
	int uzunluk=0;
	int i;
	
	for(i=0; p[i]!='\0'; i++) {
		uzunluk++;
	}
	
	return uzunluk;
}


int main() {
	
	char yazi[] = "alihappy";
	
	printf("%d",mystrlen(yazi));
	
	getch();
	return 0;
}

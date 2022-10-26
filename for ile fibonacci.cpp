#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main() {
	
	int ilksayi=1, ikincisayi=1, a;
	
	printf("%d\n%d\n", ilksayi,ikincisayi);
	
	for(a=0; a<20; a++) {
		
		int sonraki=ikincisayi;
		
		ikincisayi+=ilksayi;
		
		ilksayi=sonraki;
		
		printf("%d\n", sonraki);
		
	}
	
	getch();
	return 0;	
}

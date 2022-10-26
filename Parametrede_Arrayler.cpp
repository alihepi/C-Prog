/*Parametre olarak Arrayler(matris)*/

#include<stdio.h>
#include<conio.h>

/*void boþ iþlem alaný olarak düþünülebilir*/
void matrisbastir (int matris1[3][4]){
	
	int x,y;
	
		printf("\n\n\tMatrisiniz:\n");
		
		for (x=0; x<3; x++){
			printf("\n\n");
			for (y=0; y<4; y++){
				printf("\t"); printf("%d",matris1[x][y]);
			}
		}
		
}

int main() {
	
	int matris[3][4];
	int i,j;
		
	printf("\n\n\tLutfen Matrisin elemanlarini 1.satir elemanlarindan baslayarak giriniz:\n");
	
	for (i=0; i<3; i++) {
		for (j=0; j<4; j++){
			printf("\t"); scanf("%d", &matris[i][j]);
		}
	}
	
	matrisbastir(matris);

	getch();
	return 0;
}

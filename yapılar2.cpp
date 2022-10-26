#include<stdio.h>
#include<conio.h>

struct car {
	
	int NumberOfWheels;
	int NumberOfGears;
	int model;
	float engine;
	int horse;
	
}car1,car2;


int main() {
	
	car1={4,6,2020,3.2,570};
	car2={0};	
	//car1={}; tüm deðerleri 0'a eþitlemek için car1={0}; yazmak yeterlidir.

	printf("    Car Information\n-----------------------\n");
	printf("Number of Wheels: %d\nNumber of Gears : %d\nModel\t\t: %d\nEngine\t\t: %.1f\nHorse\t\t: %d",car1.NumberOfWheels,car1.NumberOfGears,car1.model,car1.engine,car1.horse);
	
	getch();
	return 0;
	
}

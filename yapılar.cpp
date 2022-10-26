#include<stdio.h>
#include<conio.h>

struct student{
	
	char name[50];
	char surname[50];
	
	int number;
	int age;
	
};


int main() {
	
	struct student ahmet = {"Ahmet","Aslan",125,18};
	
	printf("Name\t: %s\nSurname : %s\nNumber\t: %d\nAge\t: %d",ahmet.name,ahmet.surname,ahmet.number,ahmet.age);	
	
	
	getch();
	return 0;
	
}


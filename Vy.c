#include <stdio.h>
#define PI 3.14
	

int main(){
	
	printf("Hello SA01\n");
	printf("Welcome to Binus Alam Sutera\n");
	
	//	int, char, float, double
	printf("Size of : %d\n Size of : %d\n Size of : %d\n Size of : %d\n\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	int Value = 12;
	printf("Hexadecimal = %x\n", Value);
	printf(" ASCII 65 = %c\n\n", Value);
	
	float f = 3.75;
	int x = (int)f;
	printf("x = %d\n\n", x);
	
	const int day = 7;
	printf("PI = %2.lf\n day = %d\n\n", PI, day);
	
	float number = 5.21;
	printf("number = %f\n\n", number);
	
	printf("number = %f\n", number);
	printf("%-3s %-20s %-3s\n", "No.", "Name", "Age");
	printf("%-2d. %-20s %-3d\n", 1, "Andi Pranoto", 25);
	printf("%-2d. %-20s %-3d\n", 2, "Dewi Surya", 30);
	printf("%-2d. %-20s %-3d\n\n", 3, "Doni William", 35);
	
	//	char name[100] = "Andi";
	
	char name[100];
	int age;
	
	/*
	name[0] = 'A';
	name[1] = 'n';
	name[2] = 'd';
	name[3] = 'i';
	name[4] = NULL; 
	*/
	
	scanf("%s %d", &name, &age);
	getchar();
	//	printf("Your Name is = %s\n\n", name);
	//printf("input Your name:");
	//scanf("%[^\n]", &name);
	//scanf("%[a-z]", nama)
	//getchar();
	// gets(nama);
	
	//printf("input Your age:");
	//scanf("%d", &age);
	//getchar();
	
	printf("%s %d", name, age);
	
	puts("Hello World");
	
	return 0;
	
}



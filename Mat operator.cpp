#include <stdio.h>

int main(){
	
	int value1 = 10, value2 = 5, result;
	result = value1 + value2;
	printf("value1 + value2 = %d\n",result);
	printf("%d + %d = %d\n\n", value1, value2, result); // Tambah
	
	result = value1 - value2;
	printf("value1 - value2 = %d\n",result);
	printf("%d - %d = %d\n\n", value1, value2, result); // Kurang
	
	result = value1 * value2;
	printf("value1 * value2 = %d\n",result);
	printf("%d * %d = %d\n\n", value1, value2, result); // Kali
	
	result = value1 / value2;
	printf("value1 / value2 = %d\n",result);
	printf("%d / %d = %d\n\n", value1, value2, result); // Bagi
	
	result = value1 % value2;
	printf("value1 %% value2 = %d\n",result);
	printf("%d %% %d = %d\n\n", value1, value2, result); // Modulus
	
	int nilai1 = 10, nilai2 = 20;
	printf("nilai = %d\n", nilai2++); // post increment
	printf("nilai = %d\n", nilai2);
	printf("nilai = %d\n", ++nilai2); // pre increment
	printf("nilai = %d\n", nilai2); 
	
	printf("nilai = %d\n", nilai1--); // post decrement
	printf("nilai = %d\n", nilai1);
	printf("nilai = %d\n", --nilai1); // pre decrement
	printf("nilai = %d\n\n", nilai1);
	
	int var = 5;
	printf("%d == 5? %d\n", var, var == 5);
	printf("%d != 5? %d\n", var, var != 5);
	printf("%d < 5? %d\n", var, var < 10);
	printf("%d >= 5? %d\n", var, var >= 10);
	
	int hasil = (var <= 10)? 100:-1; // short hand if else
	printf("%d\n", hasil);
	
	printf("score id %d, %s\n\n", var, (var > 65)?"Passed":"Failed"); // short hand if else
	
	//Checking if a value is character A - Z or not
	char C;
	scanf("%c", &C);
	getchar();
	printf("%c %s\n\n", C, ( C >= 'A' && C <= 'Z')? "is a capital letter" : "is not a capital letter" );
	
    //	nilai = nilai + 10;
    int nilai = 5;
	nilai += 10;
    printf("nilai = %d\n\n", nilai);
    
    // and or decimal
    int A = 1, B = 8;
    
    printf("%d & %d = %d\n", A, B, A & B); // And
    printf("%d | %d = %d\n", A, B, A | B); // OR
    printf("%d ^ %d = %d\n", A, B, A ^ B); // XOR
    printf("~%d = %d\n", A, ~A); // Negasi
    printf("%d << 3 = %d\n", A, A << 3); // shift left 
    printf("%d >> 1 = %d\n\n", B, B >> 1); // shift right
    
	
	int value3, value4;
	char op;
	printf("Input 2 number = ");
	scanf("%d %d", &value3, &value4);
	getchar();
	
	printf("Input operator = ");
	scanf("%c", &op);
	getchar();
	
	switch(op){
		case'+':
			printf("%d\n\n", value3 + value4);
			break;
			
		case'-':
			printf("%d\n\n", value3 - value4);
			break;
			
		case'*':
			printf("%d\n\n", value3 * value4);
			break;
			
		case'/':
			printf("%d\n\n", value3 / value4);
			break;
		
		default:
			printf("character doesnt match the math equation");
	};
	return 0;
}

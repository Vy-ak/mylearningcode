#include <stdio.h>

int main(){
	
	int value1 = 10, value2 = 5, result;
	int value3, value4;
	char op;
	int nilai = 5, nilai1 = 10, nilai2 = 20;
	
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
	
	printf("nilai = %d\n", nilai2++); // post increment
	printf("nilai = %d\n", nilai2);
	printf("nilai = %d\n", ++nilai2); // pre increment
	printf("nilai = %d\n", nilai2); 
	
	printf("nilai = %d\n", nilai1--); // post decrement
	printf("nilai = %d\n", nilai1);
	printf("nilai = %d\n", --nilai1); // pre decrement
	printf("nilai = %d\n", nilai1);
	
    //	nilai = nilai + 10;
    nilai += 10;
    printf("nilai = %d\n\n", nilai);
	
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

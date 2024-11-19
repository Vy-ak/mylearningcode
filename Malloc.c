#include <stdio.h>
#include "4.c"
#include <stdlib.h>

#define CETAK printf("Hello world\n");

void print(){
	static int count = 0;
	printf("count = %d\n", count++);
}

int main(){
	
	CETAK;
	int *pointer = (int *)calloc(3,5);
	
	printf("Pointer = %d\n", *pointer);
	
	free(pointer); //deallocate
	
	extern int x;
	printf("number = %d\n", x);
	
	int i;
	for( i = 0; i < 5; i++) print();
	for( i = 0; i < 3; i++) print();
	
	system("date"); // get the date
	system("cls"); // clear screen
	
	return 0;
	
}

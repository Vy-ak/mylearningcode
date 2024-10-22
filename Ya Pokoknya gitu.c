#include <stdio.h>

int factorial(int n){
	if(n == 1) return 1;
	else return n * factorial(n-1);
}

int fibonacci(int n){
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	
	printf("factorial(5) = %d\n",factorial(5));
	
	int n = 5, i, f = 1;
	
	for(i=n;i>=1;i--){
		f *= i;	
	}
	printf("%d\n",f);
	
	for(i = 1;i<=5;i++){
		printf("%d ",fibonacci(i));
	}
	printf("\n");
	
	printf("fibonacci(5) = %d\n",fibonacci(5));
	return 0;
} 

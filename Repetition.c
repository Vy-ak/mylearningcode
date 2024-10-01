#include <stdio.h>

int main(){
	
	/* for(int i = 1; i <= 10; i++){
		printf("%d\n", i)
	} */
	
	
	/* for loop
	
	int i;
	
	for(i = 10; i >= 1; i--){
		if( i == 6)continue;
		printf("%d\n", i);
		
	} */
	
	
	/* nested for loop
	
	int i,j, k;
	
	for(i = 1; i<=5; i++){
		for(j = 1; j <=5 ; j++){
			for(k = 1 ; k <= 5; k++){
				printf("%d %d %d\n", i, j, k);
			}
		}
	} */
	
	
	/* Soal dadakan
	
	int a, i, b, total = 0;
	
	scanf("%d", &a);
	getchar();
	
	for(i = 1; i <= a; i++){
		scanf("%d", &b);
		total += b;
	}
	
	printf("%d\n", total); */
	
	
	/* while loop
	
	int b = 1;
	
	while( b <= 5 ){
		printf("%d ",b);
		b++;
	} */
	
	
	/* contoh kasus
	
	int b = 1;
	
	while(b != 0){
		printf("Input number [ 0 for exit ]: ");
		
		scanf("%d", &b);
		getchar();
		
		printf("The number is %d\n", b);
	} */
	
	
	/* Do while loop
	
	int c = 1;
	
	do{
		printf("%d\n", c++);
	} while( c <= 5); */
	
	
	/* soal dadakan lg
	
	int a, i = 1, b, total = 0;
	
	scanf("%d", &a);
	getchar();
	
	do{
		scanf("%d", &b);
		getchar();
		
		total += b;
		i++;
	}while( i <= a);
	
	printf("%d", total);*/
	
	
	/* dadakan lg
	
	int c = 1;
	
	do{
		printf("Input Score [0...100]: ");
		scanf("%d", &c);
		getchar();
		
	}while( c > 100 || c < 0 ); 
	
	printf("The score is %d\n", c); */
	
	
	/* dadakan lg
	
	int d;
	
	
	
	do{
		printf("Input discount[10|25|50]: ");
		scanf("%d", &d);
		getchar();
	}while( d != 10 && d != 25 && d != 50);
	
	printf("You've got %d discount", d); */
	
	
	/* bikin simbol
	int i, j;
	
	for( i = 1; i <= 5; i++){
		for (j = 1; j <= 5; j++){
			printf("*");
		}
		puts(" ");
	} */
	
	return 0; 
	
}

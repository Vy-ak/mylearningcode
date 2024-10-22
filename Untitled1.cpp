#include <stdio.h>


int global = 0;

void printHelloWorld(){
	int i;
	for(i=1;i<=10;i++){
		printf("Hello world %d\n",i);
		global++;
	}
}

int getSumInt(int a, int b){
	int c = a + b;
	return c;
}

void multiply3(int *a, float *b, double *c){
	*a*=3;
	*b*=3;
	*c*=3;
	
	printf("a = %d\nb =%f\nc =%lf\n",*a,*b,*c);
}

double getSumDouble(double a, double b); //function prototype

void UbahNilai(int *x){
	*x = 100;
	printf("ubah nilai x = %d\n",*x);
}

void swap(int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
	
	printf("nilai 1 = %d\nnilai 2 = %d\n",*x,*y);
}

void PassArray(int arr[10]){
	int i;
	for(i=0;i<10;i++){
		arr[i]*=10;
	}
}

int main(){
	
	int arr[10],i;
	
	for(i = 0;i<10;i++){
		arr[i]=3;
	}
	
	printf("Start Values Array\n");
	for(i = 0;i<10;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	PassArray(arr);
	
	printf("new array value\n");
	for(i = 0;i<10;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	int nilai1 = 100;
	int nilai2 = 50;
	
	printf("before swap\n");
	printf("nilai 1 = %d\nnilai 2 = %d\n",nilai1,nilai2);
	
	printf("after swap\n");
	swap(&nilai1,&nilai2);
	
	int x = 5;
	
	printf("x before = %d\n",x);
	UbahNilai(&x);
	printf("x after = %d\n",x);
	
	int val1;
	float val2;
	double val3;
	
	scanf("%d %f %lf",&val1,&val2,&val3);
	getchar();
	
	multiply3(&val1,&val2,&val3);
	
	printf("val1 = %d\n",val1);
	printf("val2 = %f\n",val2);
	printf("val3 = %lf\n",val3);
	
	printHelloWorld();
	printHelloWorld();
	
//	int data1, data2;
//	scanf("%d %d",&data1,&data2);
//	getchar();
//	
//	int resultInt = getSumInt(data1, data2);
//	printf("%d\n",resultInt);

	printf("double = %lf\n",getSumDouble(5.5,7));
	printf("Global = %d\n",global);
	
	
	return 0;
}

double getSumDouble(double a, double b){
	global*=2;
	return 2*(a + b);
	
}

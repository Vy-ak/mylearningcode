#include <stdio.h>


void swap(int *X, int *Y){
	int temp = *X;
	*X = *Y;
	*Y = temp;
}
int main(){
	
	int arr[] ={10,20,50,8,3};
	int n = 5,i,j;
	
	printf("Before Sort: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	puts("");
		
	// bubble sort
//	for(i=0;i<n;i++){
//		for(j=n-1;j>i;j--){
//			if(arr[j]>arr[j-1]){ // < Ascending , > Descending
//
//				//swap
//				int temp = arr[j];
//				arr[j] = arr[j-1];
//				arr[j-1] = temp;
//			}
//		}
//	}


	// Selection Sort
//	for(i=0;i<n-1;i++){
//		int idx_smallest = i;
//		for(j=i+1;j<n;j++){
//			if(arr[j]<arr[idx_smallest]){
//				idx_smallest = j;
//			}
//		}
//		
//		//swap
//		swap(&arr[i], &arr[idx_smallest]);
//	}

	// Insertion Swap
//	for(i=1;i<n;i++){
//		int temp = arr[i];
//		for( j = i - 1; j >= 0 && temp < arr[j]; j--){
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = temp;
//	}
	
	// linear Searching
	int key = 50;
	
	for(i = 0;i<n;i++){
		if(key == arr[i]){
			printf("Found at index-%d\n",i);
			break;
		}
	}
	printf("After  Sort: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}

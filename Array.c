#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	int i,N, counter = 0;
	char words[100];
	
	/* for(i = 0; i<256;i++){
		printf("%d. %c\n",i,i);
	} */
	
	char kata[100] = "flower";
	/* for(i = 0; i<strlen(kata);i++){
		if(kata[i] >= 'a' && kata[i] <= 'z')
			kata[i] -= 32;
	}
	printf("%s",kata);*/
	
	for(i = 0; i<strlen(kata);i++){
		if(kata[i] == 'a' || kata[i] == 'i' || kata[i] == 'u' || kata[i] == 'e' || kata[i] == 'o'){
			counter++;
		}
	}
	printf("%d\n", counter);
	
	scanf("%s", words);
	getchar();
	
	words[1] = '*';
	words[3] = '*';
	
	printf("%s\n", words);
	printf("length of string : %d\n",strlen(words));
	// words = "Bina Nusantara"; -> Error
	
	strcpy(words, "Bina Nusantara");
	printf("%s\n", words);
	
	// strncpy(words, "Nasional",4);
	// printf("%s\n", words);
	
	strcat(words," University");
	printf("%s\n", words);
	
	strcpy(words,"Binus");
	printf("Binus == %s? %d\n",words,strcmp(words,"BINUS"));
	if(strcmpi(words,"Binus") == 0){ // i for ignore case
		printf("The words are: %s\n",words);
	}else{
		printf("Not %s\n",words);
	}
	
	// strrev(words);
	// printf("%s\n",words);
	
	words[strlen(words)-1] = toupper(words[strlen(words)-1]);
	printf("%s\n", words);
	
	words[strlen(words)-1] = tolower(words[strlen(words)-1]);
	printf("%s\n", words);
	
	for(i = 0; i<strlen(words);i++){
		words[i] = toupper(words[i]);
	}
	printf("%s\n", words);
	
	//int arr[5] = {10,20,30,40,50};
	
	/* 1 dimensional array
	
	int arr[100];
	int i,N;
	
	scanf("%d", &N);
	getchar();
	
	for(i = 0;i<N;i++){
		scanf("%d", &arr[i]);
		getchar();
		if(i % 2 != 0){
			arr[i] *= 2;
		}
	}
	
	for(i = 0;i<N;i++){
		printf("arr[%d] = %d\n",i, arr[i]);
	}*/
	
	/* 2 dimensional array
	
	int arr2D[3][2],i,j;
	arr2D[0][0] = 5;
	arr2D[0][1] = 10;
	arr2D[1][0] = 15;
	arr2D[1][1] = 20;
	arr2D[2][0] = 25;
	arr2D[2][1] = 30;
	

	
	for(i = 0;i<3;i++){
		for(j = 0;j<2;j++){
			printf("arr[%d][%d] = %d\n",i,j, arr2D[i][j]);	
		}
	}
	
	return 0;*/
}

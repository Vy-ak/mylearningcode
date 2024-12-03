#include <stdio.h>
#include <string.h>

struct Car{
	char Brand[100];
	char Model[100];
	int qty;
};

int main(){
	struct Car myCar[10] = {{"Toyota","Rush"  ,30},
							{"Suzuki","Ertiga",20},
							{"Toyota","Camry" ,15},
							{"Honda" ,"HRV"   ,50},
							{"Honda" ,"BRV"   ,10}};
	int idx = 5;
	
	int i,j;
	int Choose;
	int upd;
	int del;
	
	do{

		//Sort base on brand an model
		for(i=0;i<idx;i++){
			for(j=idx-1;j>i;j--){
				if(strcmp(myCar[j].Brand,myCar[j-1].Brand) < 0){
					//swap
					struct Car tempCar = myCar[j];
					myCar[j] = myCar[j-1];
					myCar[j-1] = tempCar;
				}else if(strcmp(myCar[j].Brand,myCar[j-1].Brand) == 0){
					if(strcmp(myCar[j].Model,myCar[j-1].Model) < 0){
						//swap
						struct Car tempCar = myCar[j];
						myCar[j] = myCar[j-1];
						myCar[j-1] = tempCar;
					}
				}
			}
		}
		
		//printf all data in struct
		printf("%-2s %-10s %-10s %-3s\n","No","Brand","Model","Qty");
		
		for(i = 0; i < idx;i++){
			printf("%-2d. %-10s %-10s %-3d\n",i+1,myCar[i].Brand,myCar[i].Model,myCar[i].qty);
		}
		
		printf("\n");
		printf("1. Insert Car\n");
		printf("2. Update Quantity\n");
		printf("3. Delete Car\n");
		printf("4. Exit\n");
		
		printf("Choose: ");
		scanf("%d",&Choose);
		getchar();
		
		switch(Choose){
			case 1: 
					do{
						printf("Input car's brand[Toyota|Honda|Suzuki]: ");
						scanf("%[^\n]", &myCar[idx].Brand);
						getchar();
					}while(strcmp(myCar[idx].Brand,"Toyota")!= 0 && strcmp(myCar[idx].Brand,"Honda")!= 0 && strcmp(myCar[idx].Brand,"Suzuki")!= 0);
					
					do{
						printf("Input car's model[3...20 Chars]: ");
						scanf("%[^\n]", &myCar[idx].Model);
						getchar();
					
					}while(strlen(myCar[idx].Model) < 3 || strlen(myCar[idx].Model) > 20);
					
					
					do{
						printf("Input car's quantity: ");
						scanf("%d", &myCar[idx].qty);
						getchar();
					}while(myCar[idx].qty < 1 || myCar[idx].qty > 50);
					
					idx++;
					
					break;
			case 2: 
					do{
						printf("Input Number to be updated[1...%d] ",idx);
						scanf("%d",&upd);
						getchar();
					}while(upd < 1 || upd > idx);
					
					printf("Input New Quantity: ");
					scanf("%d",&myCar[upd-1].qty);
					getchar();
					
					
					break;
			case 3: 
					do{
						printf("Input number to be deleted: ");
						scanf("%d",&del);
						getchar();
					}while (del < 1 || del > idx );
					
					for(i=del-1;i< idx; i++){
						myCar[i] = myCar[i+1];
					}
					
					idx--;
					
					break;
			case 4: printf("Thank You So Much!");
					break;
		}
	
	}while(Choose != 4);
	
	return 0;	
}

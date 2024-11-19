#include <stdio.h>
#include <string.h>

typedef struct Address{
	char streetName[100];
	int num;
	char province[100];
}Alamat;

struct Students{
	char name[100];
	int score;
	float GPA;
	
	Alamat addr;
};

//global variable of struct
//struct Students studentGlobal;

//bit field : integer based data
struct Color{
	//tipe data nama var : BIT ;
	// 1 byte == 8 Bit
	int orange:3;
	int red:4;
	int blue:3;
};

union MyUnion{
	// get the largest capacity / memory
	char value[100];
	int data;
};

enum DayType{ sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main(){
	
	struct Color Cl;
	printf("Sizeof struct color : %d\n",sizeof(struct Color));
	
	union MyUnion MU;
	printf("sizeof union : %d\n",sizeof(union MyUnion));
	MU.data = 65;
	
	printf("data = %d\n", MU.data);
	printf("value = %s\n", MU.value);
	
	enum DayType day;
	
	for( day = sunday; day <= saturday; day++){
		printf("%d ", day);
	}; printf("\n", day);
	
//	struct Students arrStu[10] = {
//	{ "Andien", 80, 3.99,{"Jalan Karang Taruna",5,"Jawa Barat"}},
//	{ "Budiono Siregar", 85, 3.88,{"Jalan Orchard",10,"Banten"}},
//	{ "Charice", 88, 3.79,{"Jalan Rawa Belong",8,"Kalimantan Utara"}}
//	};
	
//	initialize the data based on user input ( 3 data aja )
//	int i;
//
//	for( i = 0; i < 3; i++){
//		printf("%d. Nama : ", i+1);
//		scanf("%[^\n]",arrStu[i].name);
//		getchar();
//		
//		printf("Score : ");
//		scanf("%d",&arrStu[i].score);
//		getchar();
//		
//		printf("GPA : ");
//		scanf("%f",&arrStu[i].GPA);
//		getchar();
//		
//		printf("Address: ");
//		scanf("%[^\n]",&arrStu[i].addr.streetName);
//		getchar();
//		
//		printf("No: ");
//		scanf("%d",&arrStu[i].addr.num);
//		getchar();
//		
//		printf("Province: ");
//		scanf("%[^\n]",&arrStu[i].addr.province);
//		getchar();
//		
//	}

//	for( i = 0; i < 3; i++){
//		printf("%d. Nama : %s\n   Score : %d\n   GPA : %.2f\n", i+1,arrStu[i].name,arrStu[i].score, arrStu[i].GPA);
//		printf("   Street Name : %s\n   No.%d\n   Province : %s\n\n",arrStu[i].addr.streetName,arrStu[i].addr.num,arrStu[i].addr.province);
//	}

//	struct Students st = { "Andien", 95, 3.89,{"Jalan Raya Safari", 35, "Jawa Barat"}};

//	printf("input name: ");
//	scanf("%s",st.name);
//	getchar();
//	
//	printf("Input score: ");
//	scanf("%d", &st.score);
//	getchar();
//	
//	printf("Input GPA: ");
//	scanf("%f", &st.GPA);
//	getchar();
	
//	strcpy(st.name,"Andien");
//	st.score = 85;
//	st.GPA = 3.78;

//	strcpy(st.addr.streetName,"Jalan Alam Sutera");
//	st.addr.num = 15;
//	strcpy(st.addr.province, "Banten");
	
//	printf("input name: %s\n",st.name);
//	printf("Input score: %d\n",st.score);
//	printf("Input GPA: %.2f\n",st.GPA);
//	printf("Address : %s \nNo. %d \nProvince: %s\n",st.addr.streetName,st.addr.num,st.addr.province);
	
	return 0;
}

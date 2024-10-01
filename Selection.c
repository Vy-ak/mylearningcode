#include <stdio.h>

int main(){
	
	/* if
	
	int value;
	
	scanf("%d", &value);
	getchar();
	
	if (value % 3 == 0){
		printf("%d is a multipication of 3\n", value);
	}else{
		printf("%d isn't a multiplication of 3\n", value);
	}*/
	
	/* if else
	
	long long Score;
	
	scanf("%lld", &Score);
	getchar();
	
	if( Score >= 85 && Score <= 100){
		
		printf("A : high distiction\n");
		
	} else if( Score >= 75 && Score <= 84){
		
		printf("B : distiction\n");
		
	} else if( Score >= 65 && Score <= 74){
		
		printf("C : pass\n");
		
	} else if( Score >= 50 && Score <= 64){
		
		printf("D : conceded pass\n");
		
	} else if( Score >= 0 && Score <= 49){
		
		printf("E : fail\n");
	}else{
	
		printf("Wrong");
	} */
	
	/* switch case
	
	int day;
	
	scanf("%d", &day);
	getchar();
	
	switch(day){
		case 1:
			printf("Monday\n");
			break;

		case 2:
			printf("Tuesday\n");	
			break;
			
		case 3:
			printf("Wednesday\n");
			break;
		
		case 4:
			printf("Thursday\n");
			break;
			
		case 5:
			printf("Friday\n");
			break;
			
		case 6:
			printf("Saturday\n");
			break;
			
		case 7:
			printf("Sunday\n");
			break;
			
		default:
			printf("input 1 - 7\n");	
			break;	
		
	} */
	
	/* if else dari yg switch 
	
	int hari;
	
	scanf("%d", &hari);
	getchar();
	
	if ( hari == 1){
		printf("Monday\n");
		
	}else if( hari == 2){
		printf("Tuesday\n");
		
	}else if( hari == 3){
		printf("Wednesday\n");
		
	}else if( hari == 4){
		printf("Thursday\n");
		
	}else if( hari == 5){
		printf("Friday\n");
		
	}else if( hari == 6){
		printf("Saturday\n");
		
	}else if( hari == 7){
		printf("Sunday\n");
		
	}else {
		printf("input 1 - 7");
	
	} */
	
	/* zybook
	
	int a, b, c, d, i = 0;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	getchar();
	
	if ( a % 2 != 0){
		i++;
	} 
	if ( b % 2 != 0){
		i++;
	}
	if ( c % 2 != 0){
		i++;
	}
	if ( d % 2 != 0){
		i++;
	}
	
	printf("%d", i); */
	
	return 0;
}

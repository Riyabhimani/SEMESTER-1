#include<stdio.h>
  void main(){
  	int n;
  	printf("Enter a value between 0 to 6:");
  	scanf("%d",&n);
  	switch(n){
  		case 0:printf("Sunday");
  		       break;
  		case 1:printf("Monday");
  		       break;
  		case 2:printf("Tuesday");
  		       break;
  		case 3:printf("Wednesday");
  		       break;
  		case 4:printf("Thursday");
  		       break;
  		case 5:printf("Friday");
  		       break;
  		case 6:printf("Saturday");
  		       break;
  		default:printf("invalid input");
  		        break;
	  }
  	
  }

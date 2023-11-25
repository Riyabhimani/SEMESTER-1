#include<stdio.h>
  void main(){
  	int temp;
  	printf("Enter temp:");
  	scanf("%d",&temp);
  	if(temp>=65 && temp<=90){
  		printf("Upper case");
	  }
	else if(temp>=97 && temp<=122){
		printf("Lower case");
	}
	 else if(temp>=48 && temp<=57){
	 	printf("Digit");
	 }
	 else{
	 	printf("Special character");
	 }
	    	
  }

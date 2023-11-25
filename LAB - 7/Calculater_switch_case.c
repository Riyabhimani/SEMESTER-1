#include<stdio.h>
  void main(){
  	int a,b;
  	int sum;
  	char choice;
  	printf("Enter choise:");
  	scanf("%c",&choice);
  	printf("Enter a:");
  	scanf("%d",&a);
  	printf("Enter b:");
  	scanf("%d",&b);
  	switch(choice){
  		case '+':printf("sum=%d",a+b);
  		        break;
  		case '-':printf("sum=%d",a-b);
  		        break;
  		case '*':printf("sum=%d",a*b);
  		        break;
  		case '/':printf("sum=%d",a/b);
		        break;
		default:printf("Invalid input");
		        break;
	  }
  }

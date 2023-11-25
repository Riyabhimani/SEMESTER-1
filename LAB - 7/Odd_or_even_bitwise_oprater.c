#include<stdio.h>
 void main(){
 	int a,b,c;
 	printf("Enter a:");
 	scanf("%d",&a);
 	c=a&1;
 	if(c==0){
 		printf("number is even");
	 }
	 else{
	 	printf("number is odd");
	 }
 }

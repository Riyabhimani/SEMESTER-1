#include<stdio.h>
   void main(){
   	int n,i=1,sum=0;
   	scanf("%d",&n);
   	while(i<=n/2){
   		if(n%i==0){
   			sum=sum+i;
		   }
		   i++;
	   }
	   if(n==sum){
	   	printf("No is perfect");
	   }
	   else{
	   	printf("No is not perfect");
	   }
   }

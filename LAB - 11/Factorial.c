#include<stdio.h>
   void main(){
   	int n,i,sum;
   	printf("Enter n for finf factorial:");
   	scanf("%d",&n);
   	for(i=1;i<=n;i++){
   		sum=sum*i;
	   }
	   printf("%d",sum);
   }

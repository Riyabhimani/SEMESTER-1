#include<stdio.h>
   void main(){
   	int i=1,n;
   	scanf("%d",&n);
   	while(i<=n){
   		if(n%i==0){
   			printf("Factors=%d\n",i);
		   }
		   i++;
	   }
   }

#include<stdio.h>
   void main(){
   	int n,i=1,first,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	int last=n%10;
	while(n>0){
		first=n;
		n=n/10;
	}  
	printf("%d",first+last);
	}

#include<stdio.h>
   void main(){
   	int i,n,count=0;
   	printf("Enter n:");
   	scanf("%d",&n);
   	int arr[i];
   	
   	for(i=0;i<n;i++){
   		printf("arr[%d]:",i);
   		scanf("%d",&arr[i]);
	   }
	   for(i=0;i<n;i++){
	   	if(arr[i]%3==0){
	   		count++;
		   }
	   }
	   printf("count=%d",count);
   }

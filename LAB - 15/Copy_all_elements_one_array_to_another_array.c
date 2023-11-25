#include<stdio.h>
   void main(){
   	int i,n;
   	printf("Enter n:");
   	scanf("%d",&n);
   	int arr[n],array[n];
   	
   	for(i=0;i<n;i++){
   		printf("arr[%d]:",i);
   		scanf("%d",&arr[i]);
	   }
	   for(i=0;i<n;i++){
	   	array[i]=arr[i];
	   }
	   for(i=0;i<n;i++){
	   	printf("%d\n",array[i]);
	   }
   }

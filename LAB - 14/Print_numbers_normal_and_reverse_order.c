#include<stdio.h>
   void main(){
   	int n,i=0,arr[i];
   	printf("How many numbers do you want?\n");
   	scanf("%d",&n);
   	for(i=0;i<n;i++){
   	printf("Enter a value of array arr[i]=");
   	scanf("%d",&arr[i]);
    }
   	for(i=0;i<n;i++){
   		printf("%d",arr[i]);
	   }
	   printf("\n");
	   
	   for(i=n-1;i>=0;i--){
	   	printf("%d",arr[i]);
	   }
   }

#include<stdio.h>
   void main(){
   	int i,n,negativecount=0;
   	printf("Enter n:");
   	scanf("%d",&n);
   	int arr[i];
   	
   	for(i=0;i<n;i++){
   		printf("arr[%d]:",i);
   		scanf("%d",&arr[i]);
	   }
	   for(i=0;i<n;i++){
	   	if(arr[i]<0){
	   		negativecount++;
		   }
	   }
	   printf("negativecount=%d",negativecount);
   }

#include<stdio.h>
   void main(){
   	int i,n,searchelement,flag;
   	printf("Enter n:");
   	scanf("%d",&n);
   	int arr[i];
   	
   	for(i=0;i<n;i++){
   		printf("arr[%d]:",i);
   		scanf("%d",&arr[i]);
	   }
	   printf("Enter searchelement:");
	   scanf("%d",&searchelement);
	   
	   for(i=0;i<n;i++){
	   	if(arr[i]==searchelement){
	   		flag=1;
	   		break;
		   }
	   }
	   if(flag==1){
	   	printf("Search element is found");
	   }
	   else{
	   	printf("Search element is not found");
	   }
}

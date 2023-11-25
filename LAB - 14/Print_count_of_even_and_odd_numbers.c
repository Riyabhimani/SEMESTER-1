#include<stdio.h>
   void main(){
   	int n,i,arr[i],evencount=0,oddcount=0;
   	printf("How many numbers do you want?\n");
   	scanf("%d",&n);
   	
   	for(i=0;i<n;i++){
   	printf("Enter a value of array arr[i]=");
   	scanf("%d",&arr[i]);
    if(arr[i]%2==0){
    	evencount++;
	}
	else{
		oddcount++;
	}
}
	printf("evencount=%d\n",evencount);
	printf("oddcount=%d",oddcount);
}

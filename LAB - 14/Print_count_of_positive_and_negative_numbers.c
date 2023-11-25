#include<stdio.h>
   void main(){
   	int n,i,arr[i],positivecount=0,negativecount=0;
   	printf("How many numbers do you want?\n");
   	scanf("%d",&n);
   	
   	for(i=0;i<n;i++){
   	printf("Enter a value of array arr[i]=");
   	scanf("%d",&arr[i]);
    if(arr[i]>=0){
    	positivecount++;
	}
	else{
		negativecount++;
	}
}
	printf("positivecount=%d\n",positivecount);
	printf("negetivecount=%d",negativecount);
}

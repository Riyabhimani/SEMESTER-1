#include<stdio.h>
   void main(){
   	int i,weight[3],height[3],countofperson=0;
   	for(i=0;i<3;i++){
   		printf("Enter a value of weight[i]=");
   		scanf("%d",&weight[i]);
   		printf("Enter a value of height[i]=");
   		scanf("%d",&height[i]);
   		if(weight[i]<50 && height[i]>170){
   			countofperson++;
		   }
	}
	printf("%d",countofperson);
   }

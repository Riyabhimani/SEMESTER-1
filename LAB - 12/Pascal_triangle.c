#include<stdio.h>
   void main(){
   	int i,j,s,c=1,rows=0;
   	printf("Enter rows:");
   	scanf("%d",&rows);
   	for(i=0;i<rows;i++){
   		for(s=1;s<rows-i;s++){
   			printf("  ");
		   }
		   for(j=0;j<=i;j++){
		   	if(i==0||j==0){
		   		c=1;
			   }
			else{
				c=c*(i-j+1)/j;
			   }
			   printf("%4d",c);
	       }
		   printf("\n");
	   }
   }

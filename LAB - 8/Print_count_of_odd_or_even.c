#include<stdio.h>
   void main(){
   	int n,oddsum=0,evensum=0;
   	while(n!=-1){
   		if(n%2==0){
   			evensum=evensum+n;
		   }
		else{
			oddsum=oddsum+n;
		}
		printf("Enter n:");
		scanf("%d",&n);
	   }
	   printf("evensum=%d",evensum);
	   printf("oddsum=%d",oddsum);
   }

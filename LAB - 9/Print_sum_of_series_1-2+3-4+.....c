#include<stdio.h>
   void main(){
   	int n,i=1,a=0,b=0,ans;
   	scanf("%d",&n);
   	while(i<=n){
   		if(i%2==0){
   			a=a+i;
		   }
		else{
			b=b+i;
		}
		i=i+1;
	   }
	   ans=a-b;
	   printf("Ans=%d",ans);
   }

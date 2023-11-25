#include<stdio.h>
  void main(){
  	int R,B,G;
  	float C,M,Y,W,Black,R1,B1,G1;
  	printf("Enter R B G :");
  	scanf("%d %d %d",&R,&B,&G);
  	R1=R/255.0;
  	B1=B/255.0;
  	G1=G/255.0;
  	if(R1>B1 && R1>G1){
  		W=R1;
	}
	else if(B1>R1 && B1>G1){
		W=B1;
	}
	else if(G1>R1 && G1>B1){
		W=G1;
	}
	
	C=(W-R1)/W;
	M=(W-G1)/W;
	Y=(W-B1)/W;
	Black=1-W;
	
	printf("%f %f %f %f %f",W,C,M,Y,Black);
  }

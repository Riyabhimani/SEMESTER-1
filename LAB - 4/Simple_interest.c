//Print simple intrest.

#include<stdio.h>
  void main(){
  	float P,R,N,I;
  	printf("Enter P:");
  	scanf("%f",&P);
  	printf("Enter R:");
  	scanf("%f",&R);
  	printf("Enter N:");
  	scanf("%f",&N);
  	I=P*R*N/100;
  	printf("%f",I);
  }

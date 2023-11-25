#include<stdio.h>
  void main(){
  	int Unit;
  	float bill,totalbill;
  	printf("Enter a Unit:");
  	scanf("%d",&Unit);
  	if(Unit<=50){
  		bill=Unit*0.5;
	  }
	if(Unit>50 && Unit<=150){
		bill=50*0.5+(Unit-50)*0.75;
	}
	if(Unit>150 && Unit<=250){
		bill=50*0.5+100*0.75+(Unit-150)*1.20;
	}
	if(Unit>250){
		bill=50*0.5+100*0.75+100*1.20+(Unit-250)*1.5;
	}
	totalbill=(bill+bill)*0.2;
	printf("%f",bill);
  }

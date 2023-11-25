#include<stdio.h>
  void main(){
  	float basicsalary;
  	float HRA,DA,grosssalary;
  	printf("Enter basicsalary of employee :");
  	scanf("%f",&basicsalary);
  	if(basicsalary>=10000){
  		HRA=(basicsalary*20)/100;
  		DA=(basicsalary*80)/100;
	  }
	else if(basicsalary>=20000){
		HRA=(basicsalary*25)/100;
		DA=(basicsalary*90)/100;
	}
	else{
		HRA=(basicsalary*30)/100;
		DA=(basicsalary*95)/100;
	}
	grosssalary=basicsalary+HRA+DA;
	printf("grosssalary of employee=%f",grosssalary);
}
  	

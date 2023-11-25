#include<stdio.h>
   void main(){
   	int i,count=0;
   	char arr[50];
   	printf("Enter string:");
   	gets(arr);
   	printf("%s\n",arr);
   	
   	for(i=0;arr[i]!='\0';i++){
   	count++;
    }
    printf("String length=%d",count);
   }

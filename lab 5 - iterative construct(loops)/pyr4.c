#include<stdio.h>
int main(){
	int i,j,k,count;
	count = 9;
	i=0;
	j=5;
	count=9;
	while(i<=4)
	{
       for(k=1;k<=count;k++){
       if(k<j-i||k>j+i){
       	printf(" ");
       }
       else{
       	printf("%d",i);
       }
       
       }
       printf("\n");
       i++;
       
	}
	return 0;
	}
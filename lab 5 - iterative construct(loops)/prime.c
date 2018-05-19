#include<stdio.h>
int main(){
	int i,j,count;
	count=0;
	for(i=2;i<=100;i++){
         for(j=1;j<=i;j++){
         if(i%j==0){
            count++;
         }
         }
         if(count<3){
         printf("%d is prime",i);
         }
         count=0;
         
	}
	return 0;
}
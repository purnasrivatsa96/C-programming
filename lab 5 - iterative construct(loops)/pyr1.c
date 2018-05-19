#include<stdio.h>
int main(){
	int i,j,count;
    for(i=1;i<=5;i++){
    	 j=i;
    	 count=0;
         while(count<i){
         printf("%d\t",j);
         count++;
         }
         printf("\n");
    }
    return 0;
}
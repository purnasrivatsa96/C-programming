#include<stdio.h>
int main(){
	int n,i,count,j;
	count=0;
	scanf("%d",&n);
    for(i=2;i<=n;i++){
        for(j=1;j<i;j++){
        if(i%j==0){
        count++;
        }
        }
        if(count<2){
        printf("%d is prime\n",i);
       
        }
        count=0;
    }
    return 0;
}
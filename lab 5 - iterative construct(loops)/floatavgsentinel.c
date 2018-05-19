#include<stdio.h>
int main(){
	int i,n,j;
	scanf("%d",&n);
	float f,sum=0.0,avg;
	i=0;
	j=-1;
	while(j==-1){
	scanf("%f",&f);
     sum = sum + f;
     //printf("a");
     i++;
     if(i>=n){
     	j=0;
     }
	}
    avg = sum/n;
    printf("%f",avg);
    return 0 ;
}
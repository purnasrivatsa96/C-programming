#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	float f,sum=0.0,avg;
	for(i=0;i<n;i++){
	scanf("%f",&f);
     sum = sum + f;
	}
    avg = sum/n;
    printf("%f",avg);
    return 0 ;
}
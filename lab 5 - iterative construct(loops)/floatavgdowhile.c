#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	float f,sum=0.0,avg;
	i=0;
	do
	{
	scanf("%f",&f);
     sum = sum + f;
     i++;
	}
	while(i<n);
    avg = sum/n;
    printf("%f",avg);
    return 0 ;
}
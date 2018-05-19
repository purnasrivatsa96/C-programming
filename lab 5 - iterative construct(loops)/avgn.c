#include<stdio.h>
int main(){
	int n,i;
	double sum,avg;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	sum=sum + i;
	}
	avg = sum/n;
	printf("%lf",avg);
	return 0;
}
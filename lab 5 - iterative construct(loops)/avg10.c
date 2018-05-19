#include<stdio.h>
int main(){
	int i;
	double sum=0;
	for(i=1;i<=10;i++){
	sum = sum + i;
	}
	printf("%lf",sum/10);
	return 0;
}
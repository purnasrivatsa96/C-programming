#include<stdio.h>
int main(){
	int a=10;
	int *ptra;
	ptra = &a;
	printf("%d",*ptra);
	*ptra=20;
	printf("%d",a);
	return 0;
}
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);

	int prime(int n1){
	int i,count=0;
	for(i=1;i<n;i++){
	if(n%i==0){
	count++;
	}
	}
	if(count==1)
	return 1;
	else
	return 0;
	}

	int prim = prime(n);
	if(prim==1)
	printf("prime");
	else
	printf("not prime");
	return 0;
}
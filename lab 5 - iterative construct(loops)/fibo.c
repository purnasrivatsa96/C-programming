#include<stdio.h>
int main(){
	int n,i;
	int n0=0,n1=1,n2;
	int sum=0;
	scanf("%d",&n);
	printf("%d\t%d\t",n0,n1);
	for(i=3;i<=n;i++){
    n2= n0+n1;
    printf("%d\t",n2);
    n0=n1;
    n1=n2;
    

	}

	return 0;
}
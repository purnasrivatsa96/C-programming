#include<stdio.h>
#include<math.h>
int main(){
	int a,b,n;
	int r,t;
	scanf("%d%d%d",&a,&b,&n);
	r = pow((a+b),n);
	printf("%d",r);
	return 0;
}
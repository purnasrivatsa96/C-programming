#include<stdio.h>
#include<math.h>
int main(){
	int d,u,a,t;
	scanf("%d%d%d",&u,&a,&t);
	d = u + a*t*t/2;
	printf("%d",d);
	return 0; 
}
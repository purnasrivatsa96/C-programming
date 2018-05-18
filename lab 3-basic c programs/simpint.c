#include<stdio.h>
int main(){
    double p,t,r;
    float s;
	scanf("%lf%lf%lf",&p,&t,&r);
	s= p*t*r/100;
	printf("%f",s);
	return 0;
}
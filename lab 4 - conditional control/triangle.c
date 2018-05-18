#include<stdio.h>
int main(){
	double a,b,c;
	double area;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b){
	printf("triangle");
	area = (a+b+c)/2;
	printf("%lf",area);
	}
	else{
	printf("not triangle");
	}

}
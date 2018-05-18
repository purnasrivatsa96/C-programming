#include<stdio.h>
int main(){
	double a,b;
	char op;
	scanf("%lf%lf\n",&a,&b);
    scanf("%c",&op);
    if(op=='+'){
    printf("%lf",a+b);
    }
    if(op=='-'){
    printf("%lf",a-b);
    }
    if(op=='*'){
    printf("%lf",a*b);
    }
    if(op=='/'){
    printf("%lf",a/b);
    }
    if(op!='+'&&op!='-'&&op!='*'&&op!='/')
    	printf("invalid");
    return 0;
}
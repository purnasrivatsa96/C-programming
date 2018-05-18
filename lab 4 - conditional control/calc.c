#include<stdio.h>
int main(){
	int a,b;
	double res;
	char op;
	scanf("%lf%lf\n",&a,&b);
    scanf("%c",&op);
    if(op=='+'){
    printf("%lf",a+b);
    }
    else if(op=='-'){
    printf("%lf",a-b);
    }
    else if(op=='*'){
    printf("%lf",a*b);
    }
    else if(op=='/'){
    res = (double)a/(double)b	;
    printf("%lf",res);
    }
    else
    	printf("invalid");
    return 0;
}

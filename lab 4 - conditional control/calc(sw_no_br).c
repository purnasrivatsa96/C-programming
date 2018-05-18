#include<stdio.h>
int main(){
	double a,b;
	char op;
	scanf("%lf%lf\n",&a,&b);
    scanf("%c",&op);
    switch(op){
    case '+' :
    printf("%lf",a+b);
    case '-' :
    printf("%lf",a-b);
    case '*' :
    printf("%lf",a*b);
    case '/' :
    printf("%lf",a/b);
    default :
    	printf("invalid");

    return 0;
  }


}

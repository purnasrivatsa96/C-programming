#include<stdio.h>
int main(){
	int j,k;

	double func(double x,double y){
	return 2+(y+0.5*x);
	}
    double y=1;
    double x;
    double sum,i;
	for(y=1;y<=6;y++){
	   x=5.5;
	   while(x<=12.5){
       sum = func(x,y);
       printf("when x is %lf and y is %lf, i is %lf",x,y,sum);
       printf("\n"); 
       x+=0.5;
	   }
	}

	return 0;
}
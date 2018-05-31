#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);

    double power(int a){
       return pow(2,a);
    }
    
    double sumseries(int n){
       int i;
       double sum=0.0;
       for(i=0;i<=n;i++){
         double denom = power(i);
         sum = sum + (3+2*i)/denom;
       }
       return sum;

    }

    double sum = sumseries(n);
    printf("%lf", sum);
    return 0; 
}
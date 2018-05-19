#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	double x;
	scanf("%d %lf",&n,&x);
	double sum=0;
	for(i=1;i<=n;i++){
    if(i%2==0){
    sum = sum - (pow(x,i)/sqrt(i));
    }
    else{
    sum = sum + (pow(x,i)/sqrt(i));
    }

	}
	printf("%lf",sum);
	return 0;
}
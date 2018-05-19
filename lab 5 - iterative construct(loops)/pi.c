#include<stdio.h>
#include<math.h>
int main(){
	int numofterms,i;
	double pi=0;
	scanf("%d",&numofterms);
	if(numofterms>0){
    for(i=1;i<=numofterms;i++){
    	if(i%2==0)
        pi = pi + (4.0/(2.0*i - 1));
        else
        pi = pi - (4.0/(2.0*i - 1));	
    }
    printf("%lf",pi);
    }
    else
    printf("enter valid number of terms(>=1)");
    return 0;
}
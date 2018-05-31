#include<stdio.h>
int main(){
	int n,m;
	printf("enter numbers: ");
	scanf("%d %d",&n,&m);
	int maxi;

    int max(int n1,int n2){
      if(n1>n2)
      return n1;
      else
      return n2;
    }
    
    maxi = max(n,m);
    printf("max of %d and %d is %d",n,m,maxi);
    return 0;
}
#include<stdio.h>
int main(){
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++){
	      if(i<=n){
	      for(j=1;j<=n-i+1;j++){
	      printf("%d",j);
	      }
	      }
	      if(i>n){
	      k=i-n;
	      for(j=1;j<=k+1;j++){
	      printf("%d",j);
	      }
	      }
	      printf("\n");
	}
	return 0;
}
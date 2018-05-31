#include<stdio.h>
int main(){
	int i,j,n,count,k;
	scanf("%d",&n);
	for(i=0;i<=2*n;i++){
		if(i<=n){
		for(j=1;j<=2*n-1;j++){
			if(j<n-i||j>n+i){
               printf(" ");
			}
			else
				printf("*");
		}
	    }
	    if(i>n){
	    	k=2*n-i;
		for(j=1;j<=2*n-1;j++){
			if(j<n-k||j>n+k){
               printf(" ");
			}
			else
				printf("*");
		}
	    }
	    printf("\n");
	    //printf("%d",i);
	}
	return 0;
}
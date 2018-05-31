#include<stdio.h>
int main(){
	int i,j,n,count;
	scanf("%d",&n);
	for(i=1;i<=2*n;i++){
	    if(i<=n){
	    for(j=1;j<=i;j++){
	    printf("%d",j);
	    }
	    }

	    if(i>n){
	    for(j=1;j<=2*n-i;j++){
	    printf("%d",j);
	    }
	    }
        printf("\n");

	    }
	    return 0;
	}

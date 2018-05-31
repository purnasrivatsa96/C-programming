#include<stdio.h>
int main(){
	int n1,m1;
	int n2,m2;
	int i,j,k,sum;
	scanf("%d %d",&n1,&m1);
	int a[n1][m1];
	for(i=0;i<n1;i++){
	   for(j=0;j<m1;j++){
	   scanf("%d",&a[i][j]);
	   }
	}
	scanf("%d %d",&n2,&m2);
	int b[n2][m2];
	for(i=0;i<n2;i++){
	   for(j=0;j<m2;j++){
	   scanf("%d",&b[i][j]);
	   }
	}

	int c[m1][n2];

	for(i=0;i<n1;i++){
	    for(j=0;j<m2;j++){
	        sum=0;
	        for(k=0;k<m1;k++){
	        sum = sum + a[i][k]*b[k][j];
	        }
	        c[i][j]=sum;
	    }
	}
    
    for(i=0;i<n1;i++){
       for(j=0;j<m2;j++){
       printf("%d\t",c[i][j]);
       }
       printf("\n");
    }

    return 0;

}
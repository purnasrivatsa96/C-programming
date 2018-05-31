#include<stdio.h>
int main(){
    int n,m;
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=10;i++){
         for(j=n;j<=m;j++){
         printf("%d\t",j*i);
         }
         printf("\n");
    }
    return 0;	

}
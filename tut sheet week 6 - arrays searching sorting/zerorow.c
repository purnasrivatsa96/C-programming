#include<stdio.h>
int main(){
	int i,j;
   int a[3][3] = {{1,1,1},{0},{2,2,2}};	
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
      printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   return 0;
}
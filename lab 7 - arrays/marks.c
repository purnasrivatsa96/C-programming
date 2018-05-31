#include<stdio.h>
int main(){
	int marks[5][10];
	int i,j;
	for(i=0;i<5;i++){
	   for(j=0;j<10;j++){
	   scanf("%d",&marks[i][j]);
	   }
	}
	for(i=0;i<5;i++){
	   for(j=0;j<10;j++){
	   printf("%d\t",marks[i][j]);
	   }
	   printf("\n");
	}
    return 0;
}
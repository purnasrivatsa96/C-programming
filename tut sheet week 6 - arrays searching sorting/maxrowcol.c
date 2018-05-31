#include<stdio.h>
int main(){
	int i,j;
	int max;
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	   printf("%d\t",arr[i][j]);
	   }
	   printf("\n");
	}
	for(i=0;i<3;i++){
	    max = arr[i][0];
	    for(j=1;j<3;j++){
           if(arr[i][j]>max){
           max = arr[i][j];
           }
	    }
	    printf("max of row %d is  %d\n",i+1,max);
	}
	for(i=0;i<3;i++){
	    max = arr[0][i];
	    for(j=1;j<3;j++){
           if(arr[j][i]>max){
           max = arr[j][i];
           }
	    }
	    printf("max of coloumn %d is  %d\n",i+1,max);
	}
	return 0;
	}
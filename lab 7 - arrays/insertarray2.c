#include<stdio.h>
int main(){
	int arr[100];
	int i,j,k;
	int flag=0,elem,temp;
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
	}
	scanf("%d",&elem);
	for(i=0;i<5;i++){
	if(arr[i]>elem&&flag==0){
	    flag = 1;
	    k=i;
	    for(j=5;j>k-1;j--){
           arr[j+1]=arr[j];
	    }
	    arr[k] = elem;
	}
	}
	for(i=0;i<6;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
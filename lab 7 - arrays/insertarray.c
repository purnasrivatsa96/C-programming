#include<stdio.h>
int main(){
	int arr[10],i,j,elem;
	int flag=0;
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
	}
	scanf("%d",elem);
	for(i=0;i<5;i++){
	if(arr[i]>elem&&flag==0){
	for(j=i;j<6;j++){
	arr[j+1]=arr[j];
    }
    arr[i]=elem;
    flag=1;
	}
	}
	return 0;
}
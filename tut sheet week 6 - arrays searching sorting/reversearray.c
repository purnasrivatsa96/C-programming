#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	int temp;
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++){
	temp = arr[i];
	arr[i] = arr[n-i-1];
	arr[n-i-1] = temp;
	}

	for(i=0;i<n;i++){
	printf("%d\t",arr[i]);
	}
	return 0;
}
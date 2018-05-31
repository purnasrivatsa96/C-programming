#include<stdio.h>
int main(){
	int n,j,i,min;
	int minindex;
	scanf("%d",&n);
	int arr[n];
	int flag;
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++){
	  min = arr[i];
	  flag=0;
	  for(j=i+1;j<n;j++){
	  if(arr[j]<min){
	  min = arr[j];
	  minindex = j;
	  flag=1;
	  }
	  }
	  if(flag==1){
	  arr[minindex] = arr[i];
	  arr[i] = min;
	  }
	  printf("%d\t",min);
	  printf("%d\n",arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
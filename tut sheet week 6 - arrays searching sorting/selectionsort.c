#include<stdio.h>
int main(){
    int flag =0;
	int n;
	int i,j;
	scanf("%d",&n);
	int arr[n];
	int temp;
	int k;
	int smallest;
	int smallestindex;
	for(i=0;i<n;i++){
	  scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	  smallest = arr[i];
	  for(j=i+1;j<n;j++){
	     if(arr[j]<smallest){
	     smallestindex = j;
	     smallest = arr[j];
	     flag=1;
	     }
	  }
	  if(flag==1){
	  temp = arr[i];
	  arr[i] = arr[smallestindex];
	  arr[smallestindex] = temp;
	  }
	  flag = 0;
	  for(k=0;k<n;k++){
	     printf("%d\t",arr[k]);
	   }
	   printf("\n");
	   k=0;

	}

	/*for(i=0;i<n;i++){
	printf("%d",arr[i]);
	}*/
	return 0;
}
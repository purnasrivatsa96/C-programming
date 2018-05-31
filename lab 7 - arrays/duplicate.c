#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int elem;
	int i,j,k;
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	    if(arr[j]==arr[i]){
	      for(k=j;k<n;k++){
	      arr[k]=arr[k+1];	      
	      }
	      n--;
	      j--;
	    }
	    }
	}
	for(i=0;i<n;i++){
	printf("%d\t",arr[i]);
	}
	return 0;
}
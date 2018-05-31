#include<stdio.h>
int main(){
	int n,i,j,k,minindex,temp,min;
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    /*for(i=0;i<n;i++){
      printf("%d\t",arr[i]);
    }*/

    for(i=0;i<n;i++){
       min=arr[i];
       printf("%d",min);
       for(j=i+1;j<n;j++){
       if(arr[j]<min){
       min = arr[j];
       minindex= j;
       }
       }
       arr[minindex] = temp;
       arr[minindex] = arr[i];
       arr[i] = temp;

    }
    for(k=0;k<n;k++){
    printf("%d\t",arr[k]);
    }
    return 0;
}
#include<stdio.h>
int main(){
	int i,j,k,n,index,elem,m;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	  scanf("%d",&arr[i]);
	}
    
    for(i=1;i<n;i++){
       for(j=0;j<i;j++){
       if(arr[j]>arr[i]){
       elem = arr[i];
       index = j;
         for(k=i;k>j;k--){
         arr[k] = arr[k-1];
         }
         arr[index] = elem;
       }
       }

       for(m=0;m<n;m++){
    	 printf("%d\t",arr[m]);
    }
    printf("\n");
    }

    for(i=0;i<n;i++){
    	 printf("%d\t",arr[i]);
    }

    return 0;
}
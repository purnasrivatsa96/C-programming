#include<stdio.h>
int main(){
    int flag =0;
	int n,m;
	int i,j;
	int r;
	printf("enter dimensions: ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	int temp;
	int k;
	int smallest;
	int smallestindex;
	for(i=0;i<n;i++){
	  for(j=0;j<m;j++){
	  scanf("%d",&arr[i][j]);
	  }
	}
    for(r=0;r<m;r++){
	for(i=0;i<n;i++){
	  smallest = arr[i][r];
	  for(j=i+1;j<n;j++){
	     if(arr[j][r]<smallest){
	     smallestindex = j;
	     smallest = arr[j][r];
	     flag=1;
	     }
	  }
	  if(flag==1){
	  temp = arr[i][r];
	  arr[i][r] = arr[smallestindex][r];
	  arr[smallestindex][r] = temp;
	  }
	  flag = 0;
	  for(k=0;k<m;k++){
	     printf("%d\n",arr[k][r]);
	   }
	   printf("\n");
	   k=0;

	}
	}

	for(i=0;i<n;i++){
      for(j=0;j<m;j++){
     	printf("%d\t",arr[i][j]);
	}
	printf("\n");
	}
	return 0;
}
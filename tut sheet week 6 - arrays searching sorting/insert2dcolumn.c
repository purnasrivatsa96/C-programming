#include<stdio.h>
int main(){
	int i,j,k,n,index,elem,m;
  printf("enter dimesions: ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
  int c;
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
	  scanf("%d",&arr[i][j]);
   }
	}
   for(c=0;c<m;c++){ 
    for(i=1;i<n;i++){
       for(j=0;j<i;j++){
       if(arr[j][c]>arr[i][c]){
       elem = arr[i][c];
       index = j;
         for(k=i;k>j;k--){
         arr[k][c] = arr[k-1][c];
         }
         arr[index][c] = elem;
       }
       }

       for(m=0;m<n;m++){
    	 printf("%d\t",arr[m][c]);
    }
    printf("\n");
    }
  }
    printf("\n");
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
    	 printf("%d\t",arr[i][j]);
      }
      printf("\n");
    }

    return 0;
}
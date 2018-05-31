#include<stdio.h>
int main(){
	int n,m;
	printf("enter dimensions: ");
	scanf("%d %d",&n,&m);
	int i,j;
	int arr[n][m];
	int flag=0;
	for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&arr[n][m]);
        }
	}
    int key;
    int row,column;
	printf("enter key: ");
	scanf("%d",&key);

    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
       if(arr[n][m]==key){
       row = i;
       column = j;
       flag=1;
       }
       }
    }
    if(flag==1){
    printf("%d last occurs in row %d and column %d",key,row+1,column+1);
    }

    return 0;

}
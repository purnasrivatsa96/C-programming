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
        scanf("%d",&arr[i][j]);
        }
	}
    int key;
    int row,column;
	printf("enter key: ");
	scanf("%d",&key);
    printf("%d",key);
	 for(i=0;i<n;i++)
	 {
       for(j=0;j<m;j++)
       {
       			printf("%d %d \n",key,arr[i][j]);
       			if(arr[i][j]==key)
       			{
       
       				printf("%d occurs at row %d column %d\n",key,i+1,j+1);
       			}
       			else
       			{
       				printf("hello\n");
       			}
       }
    }
    return 0;

}
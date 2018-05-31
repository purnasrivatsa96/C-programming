#include<stdio.h>
int main(){
	int n,m;
	int i,j;
	int start,end,frow,fcolumn,row;
	int elem;
    printf("dimensions :");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
         scanf("%d",&arr[i][j]);
         }
    }
    printf("enter element: ");
    scanf("%d",&elem);
    j=0;
    for(i=0;i<n;i++){
        if(arr[i][j]<=elem&&arr[i+1][j]>elem){
        row = i;
        }
    }
    
    //printf("%d",row+1);
    start = 0;
    end  = m-1;
    int middle;
    middle = (start+end)/2;
    int flag=0;

    while(start<=end){
             if(arr[row][middle]==elem){
             frow = row;
             //printf("%d\n",frow);
             fcolumn = middle;
             printf("a");
             flag=1;
             break;
             }
             if(arr[row][middle]>elem){
             end = middle-1;
             printf("b");
             }
             if(arr[row][middle]<elem){
             start = middle+1;
             printf("c");
             }

             middle = (start+end)/2;
        
    }
    if(flag==1)
    printf("%d is in row %d and column %d",elem,frow,fcolumn);
    else
    	printf("element not present");
    return 0;

}
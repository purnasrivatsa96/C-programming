#include<stdio.h>
int main(){
    int a[10],i,n,m,c=0;
    int index,flag;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0;i<=n-1;i++){
         scanf("%d",&a[i]);
    }
    printf("Enter the number to be search: ");
    scanf("%d",&m);
    for(i=0;i<=n-1;i++){
        c=0;
         if(a[i]==m){
             c=1;
             flag=1;
         }
         if(c==1){
           index = i;
         }
    }

    if(flag==0)
         printf("The number is not in the list");
    else
         printf("last occurence is at index %d",index);
    return 0;
}
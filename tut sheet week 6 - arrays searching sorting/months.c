#include<stdio.h>
int main(){
    int a[10];
    int b[10];
    int i;
    for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    }	
    for(i=0;i<10;i++){
    scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
    if(a[i]==b[i]){
    printf("%d",i+1);
    }
    }
    return 0;
}
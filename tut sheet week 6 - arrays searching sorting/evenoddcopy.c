#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int b[n];
	int i;
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int evenpointer=0;
	int oddpointer=n-1;
    for(i=0;i<n;i++){
    if(arr[i]%2==0){
    b[evenpointer]=arr[i];
    evenpointer++;
    }
    else{
    b[oddpointer] = arr[i];
    oddpointer--;
    }
    }

    for(i=0;i<n;i++){
    printf("%d",b[i]);
    }
    return 0;

}
#include<stdio.h>
#include<math.h>
int main(){
	int n,i,k;
	int count=0;
	int temp,l=0;
	scanf("%d",&n);
	temp = n;
	while(n>=1){
    n=n/2;
    count++;
	}
	printf("%d\n",count);

	while(temp>=1){
	k=temp%2;
	//printf("%d",k);
    if(k==0){
    	l = l + pow(10,count-1);
    }
    count--;
    temp=temp/2;
	}
	printf("%d",l );

	return 0;
}
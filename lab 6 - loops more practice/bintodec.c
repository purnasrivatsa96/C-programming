#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n,count;
	int temp,sum,rem;
	scanf("%d",&n);
	count=0;
	temp = n;
	while(n>0){
	count++;
	n=n/10;
	}
	//printf("%d\n",count);
	i=0;
	sum=0;
	while(i<count){
	rem = temp%10;
	sum = sum + rem*pow(2,i);
	i++;
	temp= temp/10;
	}
	printf("%d",sum);

}
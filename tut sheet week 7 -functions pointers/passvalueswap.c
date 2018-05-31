#include<stdio.h>
void swap(int num1,int num2);

int main(){
	int x,y;
	printf("enter two number: ");
	scanf("%d %d",&x,&y);
	printf("\nbefore swapping x= %d and y = %d",x,y);
	swap(x,y);
	printf("\n after swapping x= %d and y = %d",x,y);
	return 0;
}
 void swap(int num1,int num2){
 int temp;
 temp = num1;
 num1=num2;
 num2=temp;
 }
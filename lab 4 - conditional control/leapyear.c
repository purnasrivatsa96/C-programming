#include<stdio.h>
int main(){
	int n;
	int flag=0;
	scanf("%d",&n);
	if(n>=2000&&n<=2100){
	     if(n%4==0){
	         printf("leap year");
	         flag=1;
	     }
	     if(n%100==0){
	          if(n%400==0){
	          printf("leap year");
	          flag=1;
	          }
	     }
	     if(flag==0){
	     printf("not leap year");
	     }

	}
	else{
	printf("not 21st century");
	}
}
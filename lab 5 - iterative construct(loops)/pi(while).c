#include<stdio.h>
int main(){
	int n,i;
	double pi=0;
	scanf("%d",&n);
    i=0;
    while(i<=n){
    if(i%2==0)
    pi = pi + (4/(2*(double)i -1));
    else
    pi = pi - (4/(2*(double)i -1));
    return pi;
    }
}
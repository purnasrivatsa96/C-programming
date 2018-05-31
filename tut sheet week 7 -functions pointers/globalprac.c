#include<stdio.h>
int a,b,c;
int main(){
	scanf("%d %d %d",&a,&b,&c);

	int func(int a1, int b1,int c1){
	   int min;
	   if(a<b&&b<c)
	   min = a;
       if(b<a&&b<c)
	   min = b;
	   if(c<a&&c<b)
	   min = c;

	   if(min==a){
	     a--;
	     b++;
	     c++;
	     return a;
	   }
	   if(min==b){
	     b--;
	     a++;
	     c++;
	     return b;
	   }
	   if(min==c){
	     c--;
	     a++;
	     b++;
	     return c;
	   }	
	}

  
    int min = func(a,b,c);
	printf("%d %d %d",a,b,c);


}
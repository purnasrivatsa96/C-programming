#include<stdio.h>
int main()
{
int  x[3][5]={{1,2,3,40,50},{6,7,8,9,10},{11,12,13,14,15}},
*n=&x[0][0];
printf("%d\n",x);
printf("%d\n",*x); 
printf("%d\n",*(*x));   		
printf("%d\n",*(*(x+2)+1)); 	
printf("%d\n",*(*x+7));  	
printf("%d\n",(*(*(x+1))));	
printf("%d\n",*(*(x+1)+3));	
printf("%d\n",*(n+2));		
printf("%d\n",(*(n+3)+1));		
printf("%d\n",*(n+5)+1);		
printf("%d\n",++*n);		
}
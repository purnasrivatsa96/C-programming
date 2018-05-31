#include<stdio.h>
int main(void)
{
int i,n,a[25],j;
float avg;
printf("Enter the number of elements: \n");
scanf("%d",&n);
printf("Enter %d values: \n", n);
for(i=0;i<n;i++)
{
//scanf("%d",&a[i]);
	a[i]=i+1;
}
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(a[j]<a[i]){
			a[j]=a[i];
		}
	}
}
printf("%d %d %d",a[i-1],a[i-2],a[i-3]);
/*Find the largest and second largest and third largest element*/
/* Print the largest value, second largest value and third largest */
return(0);
}
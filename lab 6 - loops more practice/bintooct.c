#include<stdio.h>
#include<math.h>
int main(){
	int n,count=0;
	int digits;
	int sum=0,temp,l,i,m,k;
	int rem,reversed;
	double ans;
	scanf("%d",&n);
	m=n;
	while(n>0){
       n=n/10;
       count++;
	}
	digits= count;
	k=digits-1;
	for(i=0;i<=k;i++){
		l=m%10;
		sum=sum + l*pow(2,i);
		m=m/10;
	}
	printf("%d\n",sum);
	digits=0;
	temp = sum;
	while(sum>0){
		digits++;
		sum=sum/8;
	}
	//printf("%d",digits);
	i=0;
	ans=0;
	while(temp>0){
		rem = temp%8;
		//printf("%d\n",rem);
		ans = ans + rem*pow(10,i);
		printf("%lf\n",ans);
		temp=temp/8;
		i++;
	}
	printf("%lf",ans);

	//printf("%d",digits);
	return 0;
}
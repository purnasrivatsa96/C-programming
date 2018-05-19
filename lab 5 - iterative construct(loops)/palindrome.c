#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
    int i;
    int k;
    int j,digits;
    digits=0;
    int m;
    int flag=0;
    while(j!=0){
    j=n/i;
    i=i*10;
    digits++;
    }
    printf("%d",digits);
    m= digits -1;
    k=pow(10,m);
    k=k+1;
    printf("%d",k);
    if(digits%2==0){
    for(i=1;i<digits/2;i=i*10){
    	if(n%i!=n%k){
    		flag=1;
    	}
    	k=k/10;
    }

    }
    else{
    	for(i=1;i<(digits-1)/2;i=i*10){
    		if(n%i!=n%k){
    			flag=1;
    		}
    		k=k/10;
    	}
    }

    if(flag==0){
    	printf("palindrome");
    }
    else
    	printf("not palindrome");
    return 0;
}
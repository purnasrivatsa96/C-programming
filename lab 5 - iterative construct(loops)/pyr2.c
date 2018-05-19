#include<stdio.h>
int main(){
	int i,j,count;
	j=1;
	i=1;
	while(i<=5){
		count=1;
        while(count<=i){
        printf("%d\t",j);
        j++;
        count++;     }
        i++;
        printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	char c[4];
	int i;
	for(i=0;i<4;++i){
	printf("address of c[%d] = %x\n",i,&c[i]);
	}
	return 0;
}
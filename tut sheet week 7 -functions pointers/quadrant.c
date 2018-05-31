#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x,&y);

	int quadrant(int x,int y){
	if(x>0&&y>0)
	return 1;
	if(x<0&&y>0)
	return 2;
	if(x<0&&y<0)
	return 3;
	if(x<0&&y>0)
	return 4;
	}

	int quad = quadrant(x,y);
	if(quad==1)
	printf("quadrant 1");
	if(quad==2)
	printf("quadrant 2");
	if(quad==3)
	printf("quadrant 3");
	if(quad==4)
	printf("quadrant 4");
	return 0;
}
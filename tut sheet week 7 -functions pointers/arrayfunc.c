#include<stdio.h>
int main(){
	int xcor[4]={1,-1,-1,1};
	int ycor[4] = {1,1,-1,-1};
	int i;
    //quad1(xcor,ycor);
    int *ptr = quad2(xcor,ycor);
    for(i=0;i<4;i++){
    	printf("%d\n",*(ptr+i));
    }
    return 0;

}
    void quad1(int xcor[],int ycor[]){
         int i;
         for(i=0;i<4;i++){
            if(*(xcor+i)>0&&*(ycor+i)>0){
            printf("(%d,%d) is in quadrant 1\n",*(xcor+i),*(ycor+i));
            }
            if(*(xcor+i)<0&&*(ycor+i)>0){
            printf("(%d,%d) is in quadrant 2\n",*(xcor+i),*(ycor+i));
            }
            if(*(xcor+i)<0&&*(ycor+i)<0){
            printf("(%d,%d) is in quadrant 3\n",*(xcor+i),*(ycor+i));
            }
            if(*(xcor+i)>0&&*(ycor+i)<0){
            printf("(%d,%d) is in quadrant 4\n",*(xcor+i),*(ycor+i));
            }
         }
    }

    int * quad2(int xcor[],int ycor[]){
         int i;
         int quadr[4];
         int *ptr = malloc(sizeof(int) *ptr);
         ptr = &quadr;
         for(i=0;i<4;i++){
            if(*(xcor+i)>0&&*(ycor+i)>0){
            quadr[i]=1;
            }
            if(*(xcor+i)<0&&*(ycor+i)>0){
            quadr[i]=20;
            }
            if(*(xcor+i)<0&&*(ycor+i)<0){
            quadr[i]=3;
            }
            if(*(xcor+i)>0&&*(ycor+i)<0){
            quadr[i]=40;
            }
         }
         return ptr;
     }


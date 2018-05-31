#include<stdio.h>
int main(){
	int sorted[10];
	int unsorted[10];
	int min;
	int i,j;
	int k=10;
	for(i=0;i<10;i++){
	    unsorted[i]=k;
	    k--;
	}
	for(i=0;i<10;i++){
	printf("%d",unsorted[i]);
	}
	printf("\n");
	
	//printf("%d",min);
	for(j=0;j<10;j++){
	min = unsorted[j];
	   for(i=1;i<10;i++){ 
	   //printf("%d\n",unsorted[i]);
       if(unsorted[i]<min){
       min = unsorted[i];
       k=i;
       //printf("%d",min);
       //printf("%d\n",min);
       }
   }
        //printf("%d",unsorted[k]);
        unsorted[k]=unsorted[j];
        unsorted[j]=min;
        //printf("%d\n",unsorted[j]);
    }

	for(i=0;i<10;i++){
	  printf("%d",unsorted[i]);
	}
	return 0;
}

#include<stdio.h>
int main(){
	int a[10],b[10];
	int i,j;
	int start,end;
	for(i=0;i<10;i++){
	a[i]=i+1;
	//printf("%d",a[i]);
	}
	end = 9;
	start = 0 ;
	for(j=0;j<10;j++){
      if(a[j]%2==0){
      b[start]=a[j];
      //printf("%d",b[start]);
      start++;
      }
      if(a[j]%2!=0){
      b[end]=a[j];
      end--;
      }
	}
    for(i=0;i<10;i++){
    printf("%d",b[i]);
    }
	return 0;
}
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	double evensum=0,oddsum=0;
	double avg;
	int arr[n];
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++){
	if(arr[i]%2==0){
	evensum = evensum + arr[i];
	}
	else{
	oddsum = oddsum +arr[i];
	}
	}
    
    avg = (evensum + oddsum)/n;
    printf("sum of even terms is %lf",evensum);
    printf("sum of odd terms is %lf",oddsum);
    printf("average is %lf",avg);
    return 0;
}
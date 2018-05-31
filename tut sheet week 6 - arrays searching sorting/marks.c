#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int marks[n][5];
	int i,j;
	int highestmarks;
	double sum,avg;
	for(i=0;i<n;i++){
	   for(j=0;j<5;j++){
	   scanf("%d",&marks[i][j]);
	   }
	}
	int option;
	scanf("%d",&option);
	switch(option){

	case 1 :
	for(i=0;i<n;i++){
	   highestmarks = marks[i][0];
	   for(j=0;j<5;j++){
       if(marks[i][j]>highestmarks){
       highestmarks = marks[i][j];
       }
	   }
	   printf("highest marks for student %d is %d\n",i+1,highestmarks);
	}
    break; 
     
    case 2: 

    for(i=0;i<5;i++){
	   highestmarks = marks[0][i];
	   for(j=1;j<n;j++){
       if(marks[j][i]>highestmarks){
       highestmarks = marks[j][i];
       }
	   }
	   printf("highest marks for course %d is %d\n",i+1,highestmarks);
	}
    break;

    case 3 :
    for(i=0;i<5;i++){
	   sum = 0;
	   for(j=0;j<n;j++){
       
       sum = sum + marks[j][i];
	   }
	   avg = sum/n;
	   printf("highest marks for course %d is %lf\n",i+1,avg);
	}
     break;

     default :
     printf("invalid option");
     break;
	}
	return 0;
}
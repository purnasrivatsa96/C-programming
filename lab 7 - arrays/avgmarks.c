#include<stdio.h>
int main(){
	int marks[5][5];
    int i,j;
    double sum=0,avg=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        scanf("%d",&marks[i][j]);
        }
    }
    printf("avg of students : \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        sum = sum + marks[i][j];
        }
        avg = sum/5;
        printf("%lf\n",avg);
        avg=0;
        sum=0;
    }

    printf("avg of subjects : \n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        sum = sum + marks[j][i];
        }
        avg = sum/5;
        printf("%lf\n",avg);
        avg=0;
        sum=0;
    }

}
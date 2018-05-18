#include<stdio.h>
int main(){
	double score;
	char grade;
	scanf("%lf",&score);
	if(score>=10){
	printf("invalid score");
	}
	else if(score>=9){
	printf("A");
	}
	else if(score>=7){
	printf("B");
	}
	else if(score>=5){
	printf("C");
	}
	else if(score>=3){
	printf("D");
	}
	else 
	printf("F");
	return 0;
}
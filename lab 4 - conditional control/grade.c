#include<stdio.h>
int main(){
	int score;
	char grade;
	scanf("%d",&score);
	switch(score){
	case 10 :
	grade = 'A';
	printf("%c",grade);
	break;
	case 9 :
	grade = 'A';
	printf("%c",grade);
	break;
	case 8 :
	grade = 'B';
	printf("%c",grade);
	break;
	case 7 :
	grade = 'B';
	printf("%c",grade);
	break;
	case 6 :
	grade = 'C';
	printf("%c",grade);
	break;
	case 5 :
	grade = 'C';
	printf("%c",grade);
	break;
	case 4 :
	grade = 'D';
	printf("%c",grade);
	break;
	case 3 :
	grade = 'D';
	printf("%c",grade);
	break;
	case 2 :
	case 1 :
	case 0 :
	grade = 'F';
	printf("%c",grade);
	break;
	default :
	printf("invalid score");
	break;
	return 0;
	}
	return 0;

}
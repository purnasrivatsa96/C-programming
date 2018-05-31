#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);

	void func(char c){
	switch(c){
	   case 'r' :
	   printf("Red");
       break;
	   case 'o' :
	   printf("orange");
	   break;
	   case 'y' :
	   printf("yellow");
	   break;
	   case 'g' :
	   printf("green");
	   break;
	   case 'b' :
	   printf("blue");
	   break;
	   case 'i' :
	   printf("indigo");
	   break;
	   case 'v' :
	   printf("violet");
	   break;
	   default :
	   printf("not present");
	   break;
	}
	}

	func(c);
	return 0;
}
#include<stdio.h>
void swap(int *numx,int *numy){
	int temp;

	temp = *numx;
	printf("%d\n",temp);
	*numx = *numy;
	*numy = temp;

}

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	int *ptrx,*ptry;
	ptrx=&x;
	ptry=&y;
	printf("before swap - %d and %d",x,y);
	swap(&x,&y);
	printf("after swap - %d and %d",x,y);
	return 0;

}


/*#include<stdio.h>
void swap(int *num1, int *num2);
int main() {
   int x, y;
   printf("\nEnter two numbers : ");
   scanf("%d%d",&x,&y);
   printf("\nBefore Swaping x = %d and y = %d", x, y);
   swap(&x, &y); // Function Call - Pass By Reference
   printf("\nAfter Swaping x = %d and y = %d", x, y);
   return 0;
}
void swap(int *num1, int *num2) {
   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
*/
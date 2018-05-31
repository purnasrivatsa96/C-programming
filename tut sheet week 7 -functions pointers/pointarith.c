#include<stdio.h>
int main(){
int arr[] = {10,100,1000};
int *ptr1, *ptr2;
ptr1 = arr;
ptr1++;
ptr1--;
ptr2=ptr1;
if(ptr1==ptr2)
printf("both pointers are pointing to the same location");
return 0;
}
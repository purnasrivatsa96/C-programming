#include <stdio.h>
int main()
{
int count, numOfTerms;
double pi = 0;
printf("\n Number of terms (must be 1 or larger):");
scanf("%d", &numOfTerms);
for(count = 1; count <= numOfTerms; count++) {
if(count % 2 == 0)
pi += (4.0 / (2.0 * count -1) ); // Odd term
else
pi -= (4.0 / (2.0 * count -1) ); // Even term
}
printf("\n The approximate value of pi is %f", pi);
}
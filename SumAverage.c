#include <stdio.h>
#include <stdlib.h>

int main()
{
  double arr[10], sum=0.0;
  int count=0;
  
  while(count<10)
  {
    printf("\nEnter a number:");
    scanf("%lf", &arr[count]);
    sum+=arr[count];
    ++count;
  }
  
  printf("\nSum = %.2lf\nAverage = %.2f", sum,sum/10);

}

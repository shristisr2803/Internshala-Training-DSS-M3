#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, count;
  float high_value;
  
  printf("\nEnter the size of the array:");
  scanf("%d", &n);
  float values[n];
  
  for(count=0;count<n;count++)
  {
    printf("\nValues[%d] = ",count);
    scanf("%f",&values[count]);
  }
  
  high_value = values[0];
  
  for(count=1;count<n;count++)
  {
    if(values[count]>high_value)
    {
      high_value=values[count];
    }
  }
  
  printf("\nHighest value = %.2f", high_value);
}
  
  

  

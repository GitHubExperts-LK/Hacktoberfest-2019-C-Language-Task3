#include <stdio.h>

void  main()
{
  int n[10];
  int i;
  for(i=0;i<10;i++)
  {
      printf("Enter element %d : ",i+1);
      scanf("%d",&n[i]);
  }
  printf("\n Elements in array are ");
  for(i=0;i<10;i++)
  {
      printf("%d ",n[i]);
  }
}

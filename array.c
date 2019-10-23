#include <stdio.h>

void  main()
{
    int arr[10];
    printf("Enter 10 numbers");
    scanf("%d%d%d%d%d%d%d%d%d%d");
    for(int i=0;i<10;i++)
    {
        printf(arr[i]);
        printf("/n");
    }
    for(int i=9;i<0;i--)
    {
        printf(arr[i]);
        printf("/n");
    }
}

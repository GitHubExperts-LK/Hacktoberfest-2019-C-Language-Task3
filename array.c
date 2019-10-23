#include <stdio.h>

void  main()
{
    int Arr[10];
    printf("Enter 10 Numbers seperated by spaces");
    scanf(" %d %d %d %d %d %d %d %d %d %d");

    for(int i = 0; i<10;i++){
        printf(Arr[i]);
        printf("\n");
    }

    for(int i = 9; i<0;i--){
        printf(Arr[i]);
        printf("\n");
    }
}

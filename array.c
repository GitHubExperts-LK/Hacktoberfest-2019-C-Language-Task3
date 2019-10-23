#include <stdio.h>

void  main()
{
    int num[10];

    for(int i=0; i < 10; i++){
        scanf("%d", &num[i]);
    }

    for(int i=0; i < 10; i++){
        printf(num[i]);
    }
}

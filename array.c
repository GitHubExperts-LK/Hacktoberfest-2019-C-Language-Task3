#include <stdio.h>

int main()
{
    int size,x,y;
    printf("Enter Array Size ");
    scanf("%d",&size);
    int arr[size];
    for(x=0;x<size;x++){
        printf("element - %d : ",x);
        scanf("%d",&arr[x]);
    }
    printf("The values store into the array are : ");
    for(x=0;x<size;x++){
        printf("%d ",arr[x]);
    }

    printf("The values store into the array in reverse are : ");
    for(x=size-1;x>=0;x--){
        printf("%d ",arr[x]);
    }
}

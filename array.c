#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    printf("Enter Array Size:");
    scanf("%d",&size);
    int arr[size];
    printf("\nStart Entering Elements to the Array\n");
    for(i=0;i<size;i++){
        printf("\nElement %d - ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n*Elements in array are: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("*Elements in Reverse are: ");
    for(i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;


}

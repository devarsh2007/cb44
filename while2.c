#include<stdio.h>
void main()
{
    // 1 2 3 4...100
    int count = 1;
    int num;

    printf("enter number : ");
    scanf("%d",&num);

    while(count<=num)
    {
        printf("%d ",count);
        count++;
    }

    // printf("%d",count);
    // printf("%d ",count);

    // count++;
    // printf("%d ",count);

    // count++;
    // printf("%d ",count);
}
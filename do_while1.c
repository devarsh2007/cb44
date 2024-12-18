#include<stdio.h>
void main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    int i=1;
    int sum=0;

    do
    {
        sum = sum+i;
        i++;
    }while(i<=n);

    printf("sum : %d",sum);
    // sum = sum+i;
    // i++;

    // sum = sum+i;
    // i++;
}
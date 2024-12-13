#include<stdio.h>
void main()
{
    // * * * *

    int count=1;
    int number;
    char symbol;

    printf("enter symbol : ");
    scanf("%c",&symbol);

    printf("enter number : ");
    scanf("%d",&number);

    while(count<=number)
    {
        printf("%c ",symbol);
        count++;   //increment
    }

    // printf("* ");
    // printf("* ");
    // printf("* ");
    // printf("* ");
    // printf("* ");
    // printf("* ");
    // printf("* ");
    // printf("* ");
    // printf("* ");

}
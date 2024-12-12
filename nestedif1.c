#include <stdio.h>
void main()
{
    // write a program that find max from 3 numbers

    int a, b, c;

    printf("enter a : ");
    scanf("%d", &a);

    printf("enter b : ");
    scanf("%d", &b);

    printf("enter c : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is maximum");
        }
    }

    else if (b > a)
    {
        if (b > c)
        {
            printf("b is maximum");
        }
    }

    else if (c > a)
    {
        if (c > b)
        {
            printf("c is maximum");
        }
    }

    else if(c==a)
    {
        if(a==b)
        {
            printf("all are same ");
        }
    }

    else{
        printf("invald input");
    }
}
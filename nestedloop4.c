#include <stdio.h>
void main()
{
    // abcd
    // abc
    // ab
    // a

    for (int j = 122; j >= 97; j--)
    {
        for (int i = 97; i <= j; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }

    // for(int i=97; i<=99 ; i++)
    // {
    //     printf("%c",i);
    // }
    // printf("\n");

    // for(int i=97; i<=98 ; i++)
    // {
    //     printf("%c",i);
    // }
    // printf("\n");

    // for(int i=97; i<=97 ; i++)
    // {
    //     printf("%c",i);
    // }
    // printf("\n");
}
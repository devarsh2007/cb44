#include<stdio.h>
void main()
{
    char string[50];

    printf("enter your name : ");
    for(int i=0 ; i<50 ; i++)
    {
        scanf("%c",&string[i]);
        if(string[i] == '\n')
        {
            break;
        }
    }

    for(int i=0 ; i<50 ; i++)
    {
        printf("%c",string[i]);
        if(string[i]=='\n')
        {
            break;
        }
    }

    // scanf("%c",&string[1]);
    // scanf("%c",&string[2]);
    // scanf("%c",&string[3]);
    // scanf("%c",&string[4]);
    // printf("%c",string[1]);
    // printf("%c",string[2]);
    // printf("%c",string[3]);
    // printf("%c",string[4]);
}
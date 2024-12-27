#include<stdio.h>
void main()
{
    char string[5];

    printf("enter your name : ");
    scanf("%c",&string[0]);
    scanf("%c",&string[1]);
    scanf("%c",&string[2]);
    scanf("%c",&string[3]);
    scanf("%c",&string[4]);

    printf("%c",string[0]);
    printf("%c",string[1]);
    printf("%c",string[2]);
    printf("%c",string[3]);
    printf("%c",string[4]);
}
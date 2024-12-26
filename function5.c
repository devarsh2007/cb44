#include<stdio.h>
// without argument with return value fuction
float getpi()
{
    return 3.14;
}

void main()
{
    // write function that return pi value
    // pi * r * r
    float area,r=13;
    area=getpi() * r * r;

    printf("%f",area);
}
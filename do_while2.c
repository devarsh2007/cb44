#include<stdio.h>
void main()
{
    // Write a program to calculate the sum of squares of numbers from 1 to N.

    int n,sq;
    int sum = 0;
    int count=1;

    printf("enter number : ");
    scanf("%d",&n);

    do{
        sq = count*count;
        sum = sum+sq;

        count++;

    }while(count<=n);

    // sq=count*count;
    // sum = sum+sq;

    // count++;
    // sq = count*count;
    // sum = sum+sq;

    printf("%d",sum);

}
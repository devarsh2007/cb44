#include <stdio.h>
// with argument without return value function
void PrintTable(int number1, int number2)
{
    for (int j = number1; j <= number2; j++)
    {
        printf("\n------- %d table --------",number1);
        for (int i = 1; i <= 10; i++)
        {
            printf("\n%d x %d = %d", number1, i, number1 * i);
        }
        number1++;
        printf("\n");

    }
}

void main()
{
    // make a function that take number and genrate table
    // int num;
    // printf("enter number : ");
    // scanf("%d", &num);
    PrintTable(2,5);

    // PrintTable(3);
}
#include <stdio.h>
void main()
{
    // *
    // **
    // ***
    // ****

    // printf("*");
    // printf("\n");
    // int count = 1;
    int n;
    char symbol;

    printf("enter symbol : ");
    scanf("%c",&symbol);
    
    printf("enter number : ");
    scanf("%d",&n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("%c ",symbol);
        }
        // count++;
        printf("\n");
    }

    // for(int i=1; i<=2 ; i++)
    // {
    //     printf("*");
    // }
    // printf("\n");

    // for(int i=1; i<=3 ; i++)
    // {
    //     printf("*");
    // }
    // printf("\n");

    // for(int i=1; i<=4 ; i++)
    // {
    //     printf("*");
    // }
    // printf("\n");
}
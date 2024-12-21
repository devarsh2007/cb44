#include <stdio.h>
void main()
{
    // 4444
    // 333
    // 22
    // 1

    int row = 1;
    int i = 4;

    for (int j = 4 ; j>=1 ; j-- )
    {
        while (row <= j)
        {
            printf("%d", i);
            row++;
        }
        printf("\n");

        row = 1;
        i--;
    }

    // while(row<=3){
    //     printf("%d",i);
    //     row++;
    // }
    // printf("\n");

    // row=1;
    // i--;
    // while(row<=2)
    // {
    //     printf("%d",i);
    //     row++;
    // }
    // printf("\n");

    // row=1;
    // i--;
    // while(row<=1)
    // {
    //     printf("%d",i);
    //     row++;
    // }
    // printf("\n");
}
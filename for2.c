#include <stdio.h>
void main()
{
    // a b c d ... z   with asci value
    // printf("%c",i);

    // i++;
    // printf("%c",i);

    int check, choise;
    printf("1 -> capital abcd\n");
    printf("2 -> small abcd\n");

    printf("enter your choise : ");
    scanf("%d", &check);

    if (check == 1)
    {
        printf("working with capital latters\n");
        printf("1 -> accending \n");
        printf("2 -> desending \n");

        printf("enter your choise : ");
        scanf("%d", &choise);

        if (choise == 1)
        {
            for (int i = 65; i <= 90; i++)
            {
                printf("%c ", i);
            }
        }

        else if (choise == 2)
        {
            for (int i = 90; i >= 65; i--)
            {
                printf("%c ", i);
            }
        }
        else{
            printf("invalid choise!!!");
        }
    }

    else if(check == 2)
    {
        printf("working with small latters\n");
        printf("1 -> accending \n");
        printf("2 -> desending \n");

        printf("enter your choise : ");
        scanf("%d", &choise);

        if (choise == 1)
        {
            for (int i = 97; i <= 122; i++)
            {
                printf("%c ", i);
            }
        }

        else if (choise == 2)
        {
            for (int i = 122; i >= 97; i--)
            {
                printf("%c ", i);
            }
        }
        else{
            printf("invalid choise!!!");
        }
    }

    else{
        printf("invalid choise !!!!");
    }
}
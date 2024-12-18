#include <stdio.h>
void main()
{
    // write a program that separate odd and even numbers
    int n;

    printf("enter number : ");
    scanf("%d",&n);

    for (int i = 1; i<=n ; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d : even\n",i);
        }
        else
        {
            printf("%d : odd\n",i);
        }
    }

    // if(i%2 == 0)
    // {
    //     printf("even");
    // }
    // else{
    //     printf("odd");
    // }
    // i++;
}
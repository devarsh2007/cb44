#include<stdio.h>
void main()
{  
    // 1 x 1 = 1
    // 1 x 2 = 2
    // 2 x 3 = 6
    
    int fact = 1 ; 

    for(int i = 1 ; i<=3 ; i++)
    {
        printf("%d",fact);
        fact = fact*i;
        printf(" x %d = %d\n",i,fact);
    }

    printf("\nfactorial : %d",fact);
    // fact = fact*i;
    // i++;

    // fact = fact*i;
    // i++;

}
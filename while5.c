// fibonaci series
// 0 1 1 2 3 5 8 13 21
// a b c
//   a b c
//     a b c

#include<stdio.h>
void main()
{
    int a,b,c=0,n;

    printf("enter a number : ");
    scanf("%d",&n);

    a=0;
    b=1;
    printf("%d ",a);
    printf("%d ",b);

    c=a+b;     //initialization
    while(c<=n)
    {
        printf("%d ",c);
        a = b;
        b = c;
        c=a+b;
    }

    // c=a+b;
    // printf("%d ",c);

    // a=b;
    // b=c;

    // c=a+b;
    // printf("%d ",c);

    
}
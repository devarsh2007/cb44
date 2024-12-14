#include<stdio.h>
void main()
{
    // 1 4 9 16 ... 100

    int count = 1;
    int sq,n;

    printf("enter number : ");
    scanf("%d",&n);

    while(count<=n)
    {
        sq = count*count;  
        printf("%d : %d\n",count,sq);

        count++;
    }

    // sq = count*count;  //1x1
    // printf("%d",sq);

    // count++;
    // sq = count*count;   //2x2
    // printf("%d",sq);

    // count++;
    // sq = count*count;    //3x3
    // printf("%d",sq);

    // count++;
    // sq = count*count;   //4x4
    // printf("%d",sq);
}
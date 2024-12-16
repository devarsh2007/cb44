// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20

#include<stdio.h>
void main()
{
    int number;
    int count = 1;
    int answer ;

    printf("enter number : ");
    scanf("%d",&number);

    while(count<=10)
    {
        answer = number*count;
        printf("%d x %d = %d\n",number,count,answer);

        count++;
    }
    
    // answer = number*count;
    // printf("%d x %d = %d\n",number,count,answer);

    // count++;
    // answer = number*count;
    // printf("%d x %d = %d\n",number,count,answer);

}
#include<stdio.h>
// without argument without return value function
float calculator()
{
    float a,b,ans=1;
    int choise,check=1;
    while(check==1)
    {
        printf("enter number 1 : ");
        scanf("%f",&a);

        printf("enter number 2 : ");
        scanf("%f",&b);

        printf("1 for add\n2 for minus\n3 for multiply\n4 for division\n5 for power\n0 for exit");
        printf("\nenter your choise : ");
        scanf("%d",&choise);

        switch(choise)
        {
            case 1:
                ans = a+b;
                break;

            case 2:
                ans = a-b;
                break;

            case 3:
                ans = a*b;
                break;

            case 4:
                ans = a/b;
                break;

            case 5:
                for(int i=1; i<=b ;i++)
                {
                    ans=a*ans;
                }
                break;

            case 0:
                check=0;
                break;

            default:
                printf("invalid choise ");
                ans = 0;
                break;
        }
        printf("%.2f\n\n",ans);
        }
        // return ans;
}
void main()
{
    // write a function that perform operations
    // float c1;
    calculator();
    // printf("%.2f",c1);
}
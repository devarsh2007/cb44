#include<stdio.h>
void main()
{
    // write a program that take marks and give status,pecentage,grad of student

    int maths,english,science;
    float percentage;

    printf("enter marks of maths : ");
    scanf("%d",&maths);

    printf("enter marks for english : ");
    scanf("%d",&english);

    printf("enter marks for science : ");
    scanf("%d",&science);

    if((maths<0 || maths>100) || (english<0 || english>100) || (science<0 || science>100))
    {
        printf("invalid marks");
    }

    else
    {
        percentage = (maths+english+science) / 3;
        printf("\npercentage : %.2f %%",percentage);

        if(percentage<40){
            printf("\nstatus : Fail");
        }

        else{
            printf("\nstatus : Pass\n");

            if(percentage>=80 && percentage<=100)
            {
                printf("Grad : A");
            }

            else if(percentage>=60 && percentage<80)
            {
                printf("Grad : B");
            }

            else if (percentage>=40 && percentage<60)
            {
                printf("Grad : C");
            }
            
        }
    }

}
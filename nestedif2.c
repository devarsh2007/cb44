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

    if((maths<=0 || maths>=100) || (english<=0 || english>=100) || (science<=0 || science>=100))
    {
        printf("invalid marks");
    }

    else
    {
        percentage = (maths+english+science) / 3;
        printf("percentage : %.2f %%",percentage);
    }
    

}
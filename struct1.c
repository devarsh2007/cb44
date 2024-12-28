#include<stdio.h>
void main()
{
    struct student
    {
        int roll;
        int age;
        float percentage;
        int class;
        char bgroup;
    };

    struct student s1 = {101,18,99.99,12,'A'};

    printf("\nroll %d",s1.roll); 
    printf("\nage %d",s1.age); 
    printf("\npercentage %f",s1.percentage); 
    printf("\nblood group %c",s1.bgroup); 
    printf("\nclass %d",s1.class); 
    
    s1.roll = 301;
    printf("\nroll %d",s1.roll); 

}
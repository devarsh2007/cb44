#include<stdio.h>
void main()
{
    int size;
    printf("enter size of array : ");
    scanf("%d",&size);

    int student_marks[size];
    // int value;
    for(int i=0 ; i<size ; i++)
    {
        printf("enter marks%d : ",i+1);
        scanf("%d",&student_marks[i]);
        // student_marks[i] = value;
    }

    for(int i=0 ; i<size ; i++)
    {
        printf("marks%d : %d\n",i+1,student_marks[i]);
    }

    // student_marks[1] = 23;
    // student_marks[2] = 23;
    // student_marks[3] = 60;
    // student_marks[4] = 99;

    // printf("marks2 : %d\n",student_marks[1]);
    // printf("marks3 : %d\n",student_marks[2]);
    // printf("marks4 : %d\n",student_marks[3]);
    // printf("marks5 : %d\n",student_marks[4]);

}
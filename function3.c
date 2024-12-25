#include<stdio.h>
// with argument without return value function
void BMI(float weight , float height){
    float bmi;
    height = height/100;
    bmi = weight / (height*height) ; 

    printf("Your BMI is : %.2f\n",bmi);
    if(bmi<=18.5){
        printf("status : Under weight");
    }
    else if (bmi>18.5 && bmi<=24.9)
    {
        printf("status : normal weight");
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        printf("status : over weight");
    }
    else if (bmi>=30)
    {
        printf("status : Obesity");
    }
    else{
        printf("status : unknown");
    }
    
}

void main()
{
    // make function that find bmi
    // bmi = weight / height * height
    BMI(65,183);
    
}
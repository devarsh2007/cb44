#include<stdio.h>

void BMI(float weight , int height){
    float bmi;
    height = height/100;
    bmi = weight / (height*height) ; 

    printf("%f",bmi);
}

void main()
{
    // make function that find bmi
    // bmi = weight / height * height
    
    
}
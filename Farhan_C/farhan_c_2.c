/*************************************************************************************
Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).
Date : 3-Mar-2022
Farhan Ashraf
*****************************************************************************************/
#include<stdio.h>
void func(float a, float b, float c, float *T, float *per);
void main()
{
    float a, b, c, T, per;

    printf("Enter the marks of subject 1: ");
    scanf("%f", &a);
    printf("Enter the marks of subject 2: ");
    scanf("%f", &b);
    printf("Enter the marks of subject 3: ");
    scanf("%f", &c);

    func(a, b, c, &T, &per);

    printf("\n The Total: %.2f", T);
    printf("\n The Percentage: %.2f%%", per);
}

void func(float a, float b, float c, float *T, float *per)
{
    *T = a+b+c;
    *per = ((a+b+c)/300.0)*100;
}

/*******************************************************************
//Different Method
#include<stdio.h>
float func()
{
    float a,Total=0, per;
    for(int i=1;i<=3;i++)
    {
        printf("Enter the marks of subject : %d = ",i);
        scanf("%f", &a);
        Total=Total+a;
    }
    return Total;
}
void main()
{
    float Total,per;
    Total = func();
    printf("\nThe Total marks: %.2f\n", Total);
    per = (Total/300.0)*100;
    printf("\nThe Percentage: %.2f%%", per);
}
******************************************************************************/

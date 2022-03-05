/*************************************************************************************
Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).
Date : 3-Mar-2022
Farhan Ashraf

*****************************************************************************************/

#include<stdio.h>

void func(int a, int b, int c, float *Total, float *per)
{
    *Total = (a+b+c);
    *per = ((a+b+c)/300.0)*100;
}
void main()
{
    int a, b, c;
    float Total, per;
    printf("Enter the marks of subject 1: \nEnter the marks of subject 2:\nEnter the marks of subject 3:\n");
    scanf("%d%d%d", &a,&b,&c);
  

    func(a, b, c, &Total, &per);

    printf("\n The Total marks: %.2f", Total);
    printf("\n The Percentage: %.2f%%", per);
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
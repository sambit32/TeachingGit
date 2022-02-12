#include<stdio.h>
#include<math.h>
#define pi 3.14 
int main()
{
    float r;
    printf("Enter the value of radius:");
    scanf("%f", &r);
    printf("Area=%f", pi * r * r);
    printf("\nDiameter=%f", 2 * r);
    printf("\nCircumference=%f", pi * 2 * r);
    return 0;
}
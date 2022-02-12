#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    {
        switch(num%2)
        {
        case 0:
            printf("%d is an even number", num);
            break;
        case 1:
            printf("%d is an odd number", num);
            break;
        }
    }
    return 0;
}
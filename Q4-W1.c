#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, n;
    printf("Enter two numbers:");
    scanf("%d%d", &num1, &num2);
    printf("Enter 1 for sum\n");
    printf("      2 for diff\n");
    printf("      3 for pdt\n");
    printf("      4 for div\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("sum=%d", num1 + num2);
        break;
    case 2:
        if (num1 >= num2)
            printf("diff=%d", num1 - num2);
        else
            printf("diff=%d", num2 - num1);
        break;
    case 3:
        printf("pdt=%d", num1 * num2);
        break;
    case 4:
        printf("div=%d", num1 / num2);
        break;
    default:
        printf("Wrong input");
        break;
    }

    return 0;
}
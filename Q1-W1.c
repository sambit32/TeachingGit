#include <stdio.h>
int main()
{
    int n;
    printf("Enter 1 to display name");
    printf("\n      2 for regd no.");
    printf("\n      3 for branch");
    printf("\n      4 for hobbies\n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("Name:Taufik khan\n");
            break;
        case 2:
            printf("regd no:034\n");
            break;
        case 3:
            printf("Branch:Electronics and telecommunications\n");
            break;
        case 4:
            printf("Hobbies:Netflix and chill\n");
            break;
        default:
            printf("Wrong input");
            break;
    }
    return 0;
}
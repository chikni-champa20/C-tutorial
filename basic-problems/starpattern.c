#include <stdio.h>
int main()
{
    int choice, i, j, n;
    printf("> 0 - Triangular pattern \n> 1 - Reversed triangular pattern\nEnter your choice: ");
    scanf("%d", &choice);

    // choice making

    if (choice == 0)
    {
        printf("\nEnter no. of lines of pattern should be printed: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (choice == 1)
    {
        printf("\nEnter no. of lines of pattern should be printed: ");
        scanf("%d", &n);
        for (i = n; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong Input Try again by running the code again");
    }

    return 0;
}
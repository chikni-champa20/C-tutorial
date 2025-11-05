# include<stdio.h>

int main()
{
    int a, b;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("<-----------|| Multiplication Table ||----------->\n");
    for ( b = 1; b <= 10; b++)
    {
        printf("%d X %d = %d \n",a,b,a*b);
    }
    return 0;
}

#include<stdio.h>

int addsub(int* x, int* y)
{
    int a,b;
    a=*x+*y;
    b=*x-*y;
    *x=a;
    *y=b;
    return 0;
}

int main()
{
    int a,b;
    a=4;
    b=3;
    int c = printf("%d and %d ",a,b);
    printf("\n%d",c);
    addsub(&a,&b);
    printf("\n%d and %d",a,b);
    return 0;
}


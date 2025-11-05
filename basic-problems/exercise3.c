#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int loop_fib(int n)
{
    int a, b, fib;
    a = 0;
    b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        fib = (a + b);
        a = b;
        b = fib;
    }
    return fib;
}

int main()
{
    printf("Recursive: %d\n", fib(42));
    printf("Fib:%d", loop_fib(42));
    return 0;
}

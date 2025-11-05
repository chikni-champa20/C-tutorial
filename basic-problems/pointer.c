#include <stdio.h>
int main()
{
    printf("Lets Learn pointers\n");
    int a;
    int* point=&a;
    a = 45;
    printf("value of a: %d\n",a);
    printf("address of a: %d\n", &a);
    printf("value of p: %p\n", *point);
    printf("value of p: %d\n", *point);
    printf("value of p(without *, but as int i.e. d): %d\n", point);
    printf("value of p(without * but in p): %p\n", point);
    printf("address of p: %d\n", &point);
    return 0;
}
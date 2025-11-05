#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if (w%2==0 && w!=2)
    {
        printf("YES\n");        
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}

/*🧠 Logic Behind the Answer

To have both parts even:
    - The total weight w must be even (since even + even = even).
    - But if w = 2, the only split possible is 1 + 1, which are both odd. So that fails.
Hence:
👉 The answer is YES if w is even and greater than 2,

otherwise NO.
*/
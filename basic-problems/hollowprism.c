/*
Pattern to be printed:

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
    *
*/

#include <stdio.h>
int main()
{
    int l = 5, m = 5;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == m || j == l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        if(i<5)
        {
            l--;
            m++;
            
        }
        else{
            l++;
            m--;
        }
        printf("\n");
        // else
        // {
        //     l++;
        //     m--;
        //     for ( int j = 1; j <= m; j++)
        //     {
        //         if(j== m || j== l)
        //             printf("*");
        //         else
        //             printf(" ");
        //     }
        //     printf("\n");
            
        // }
    }
    // getchar();
    return 0;
}
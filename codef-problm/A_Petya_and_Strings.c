#include<string.h>
#include<stdio.h>
#include <ctype.h>
int main()
{
    char s1[101],s2[101];
    scanf("%s",s1);
    scanf("%s",s2);
    // int len = (strlen(s1) > strlen(s2))? strlen(s1) : strlen(s2);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }
    printf("%d",strcmp(s1,s2));
    return 0;
}

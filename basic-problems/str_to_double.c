#include<stdio.h>
#include<ctype.h>

double atof(char s[])
{
    int i,sign;
    double pow,val;
    for ( i = 0; isspace(s[i]); i++);   //skips leading whitespaces (if any)
    
    sign=(s[i]=='-')?-1:1;    //checks whether the number is postive or negetive

    if(s[i]=='-'||s[i]=='+')    //skips the sign if present 
        i++;
    
    for (val=0.00; isdigit(s[i]);i++)   //converts character valur to double type
        val= val*10 + (s[i]-'0');
    
    if (s[i]=='.')  //takes the decimal point into consideration
    {
        i++;
        
    }
    
    for (pow=1.0; isdigit(s[i]); i++)   // converts the digit characters after the decimal point along with increasing the power
    {
        val= val*10 + (s[i]-'0');
        pow*=10;
    }

    return sign*val/pow;

}

int main()
{
    char s[100];
    double result;

    printf("Enter a number: \n");
    scanf("%s",s);     // read input as a string (no spaces allowed)

    result=atof(s);     //calling atof() function 

    printf("Converted value: %lf\n",result);
    return 0;
}
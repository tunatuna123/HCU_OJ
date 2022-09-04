#include <stdio.h>

double x;

long long int f(double);

int main()
{
    scanf("%lf", &x);
    printf("%lld\n", f(x));
} 

long long int f(double a){
    if (a>0)
    {
        return (int)a;
    }
    else if (a<0)
    {
        if (a-1 == (int)a-1)
        {
            return a;
        }
        else
        {
            return (int)a-1;
        }
        
        
    }
    return 0;
}
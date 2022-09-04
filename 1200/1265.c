#include <stdio.h>

long long int n;

int sqrt(long long int);

int main()
{
    scanf("%lld", &n);
    printf("%d\n", sqrt(n));
} 

int sqrt(long long int a){
    long long int temp=0;
    for (long long int i = 0; i <= a; i++)
    {
        if (i*i>a)
        {
            break;
        }
        else
        {
            temp = i;
        }
        
    }
    return temp;
}
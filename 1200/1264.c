#include <stdio.h>

long long int n;

long long int abs(long long int);

int main()
{
    scanf("%lld", &n);
    printf("%lld\n", abs(n));
} 

long long int abs(long long int a){
    if(a<0){a*=-1;};
    return a;
}
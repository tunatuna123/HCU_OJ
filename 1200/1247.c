#include <stdio.h>

long long int f();

int main()
{
    printf("%lld\n", f());
    return 0;
} 

long long int f(){
    return -2147483649;
}
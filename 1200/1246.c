#include <stdio.h>

int f();

int main()
{
    printf("%d\n", f());
    return 0;
} 

int f(){
    return 1;
}
#include <stdio.h>

float f();

int main()
{
    printf("%f\n", f());
    return 0;
} 

float f(){
    return 3.14;
}
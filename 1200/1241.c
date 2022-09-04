#include <stdio.h>

void f();

int main()
{
    f();
    return 0;
} 

void f(void){
    printf("hello");
}
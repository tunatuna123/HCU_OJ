#include <stdio.h>

float x;

int f(float);

int main()
{
    scanf("%f", &x);
    printf("%d\n", f(x));
} 

int f(float a){
    return (int)a;
}
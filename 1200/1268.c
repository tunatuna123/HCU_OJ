#include <stdio.h>

double x;

double f(double);

int main()
{
    scanf("%lf", &x);
    printf("%.14lf\n", f(x));
} 

double f(double a){
    double n = (int)a;
    return a-n;
}

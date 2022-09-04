#include <stdio.h>

double f();

int main()
{
    printf("%.13lf\n", f());
    return 0;
} 

double f(){
    return 3.1415926535897;
}
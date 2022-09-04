#include <stdio.h>

char f();

int main()
{
    printf("%c\n", f());
    return 0;
} 

char f(){
    return 'A';
}
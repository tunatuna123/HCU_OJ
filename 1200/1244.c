#include <stdio.h>

void f();

int main()
{
    f();
    return 0;
} 

void f(){
    for(int i=0; i<2; i++){
        printf("%c", '*');
    }
}
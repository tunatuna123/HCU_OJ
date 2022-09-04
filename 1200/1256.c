#include <stdio.h>

int n;

void f(int);

int main()
{
    scanf("%d", &n);
    f(n);
} 

void f(int a){
    if(a<0){
        printf("negative");
    }
    else if (a>0)
    {
        printf("positive");
    }
    else
    {
        printf("zero");
    }
    
    
}
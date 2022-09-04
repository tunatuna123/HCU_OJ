#include <stdio.h>
#include "stdbool.h"

int n;

bool zero(int);

bool plus(int);

int main()
{
    scanf("%d", &n);
    if(zero(n)) printf("zero\n");
    else printf("%s", plus(n) ? "plus\n":"minus\n");
} 

#include "stdbool.h"
bool zero(int a){
    return !a;
}

bool plus(int a){
    return a>0;
}

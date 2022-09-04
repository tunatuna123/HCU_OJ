#include <stdio.h>
#include "stdbool.h"
int n;

bool zero(int);

int main()
{
    scanf("%d", &n);
    if(zero(n)) printf("zero\n");
    else printf("non zero\n");
} 

#include "stdbool.h"
bool zero(int N) {
    if (N == 0) {
    //    N = 1;
        return true;
    }
    else {
    //    N = 0;
        return false;
    }
}
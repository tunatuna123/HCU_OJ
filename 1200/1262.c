#include <stdio.h>
#include "stdbool.h"

int n;

bool prime(int);

int main()
{
    scanf("%d", &n);
    if(prime(n)) printf("prime\n");
    else printf("composite\n");
} 

#include "stdbool.h"
bool prime(int a){
    for(int i=2; i<a; i++){
        if(a%i==0){
            return false;
            break;
        }
    }
    return true;
}
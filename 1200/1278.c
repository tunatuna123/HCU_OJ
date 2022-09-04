#include <stdio.h>

int n, m;

int min(int, int);

int main()
{
    scanf("%d%d", &n, &m);
    printf("%d\n", min(n, m));
} 

int min(int a, int b){
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
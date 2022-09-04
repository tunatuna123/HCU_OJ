#include <stdio.h>

int n;

int f(int);

int main()
{
    scanf("%d", &n);
    printf("%d\n", f(n));
} 

int f(int a){
    int count=0;
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            count ++;
        }
        
    }
    return count;
}
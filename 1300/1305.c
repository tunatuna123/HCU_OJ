#include <stdio.h>

int main(){
    int n=1,m=997, j;
    for (int i = 1; i <= n; i++)
    {
        int a=36;
        int count = 0;
        for (j = 1; j*j < a; j++)
        {
            if (a%j==0)
            {
                count+=2;
            }
        }
        if (j*j==a)
        {
            count++;
        }
        printf("%d\n", count+(m/a)-1);
    }
}
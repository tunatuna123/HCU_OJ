#include <stdio.h>

int main(){
    int n,m, j;
    scanf("%d %d", &n,&m);
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
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
#include <stdio.h>

int n, k, d[1010];

int lower_bound(int);

int main()
{
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", lower_bound(k));
} 

int lower_bound(int a){
    for (int i = 1; i <= n; i++)
    {
        if (d[i]>=a)
        {
            return i;
        }
    }
    return n+1;
}
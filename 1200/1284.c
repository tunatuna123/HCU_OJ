#include <stdio.h>

int n, a, b, d[1010];

int maxi(int, int);

int main()
{
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &d[i]);

    scanf("%d%d", &a, &b);

    printf("%d\n", maxi(a, b));
} 

int maxi(int a, int b){
    int max = d[a];
    for(int i=a; i<=b; i++){
        if (d[i]>max)
        {
            max = d[i];
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        if (d[i]==max)
        {
            return i;
        }
        
    }
    return 0;
}
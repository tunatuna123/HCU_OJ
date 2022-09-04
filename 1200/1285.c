#include <stdio.h>

int n, k, d[1010];

int findi(int);

int main()
{
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", findi(k));
} 

int findi(int a){
    for (int i = 1; i <= n; i++)
    {
        if (d[i]==a)   
        {
            return i;
        }
        
    }
    return -1;
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            printf("%d ", (i-1)*n+j);
        }
        printf("\n");
    }
}
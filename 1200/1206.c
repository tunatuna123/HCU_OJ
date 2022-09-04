#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    for(int i=m;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ", (i-1)*n+j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    for(int i=m;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            printf("%d ", (i-1)*n+j);
        }
        printf("\n");
    }
    return 0;
}
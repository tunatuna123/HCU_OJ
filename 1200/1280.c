#include <stdio.h>

int a, b;

int gcd(int, int);

int main()
{
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
} 

int gcd(int x,int y)
{
	int i,num1,num2;
	
	if(x >= y)
	{
		num1 = x;
	}
	else
		num1 = x;
		
	for(i = 1; i<=num1; i++)
	{
		if(x%i == 0 && y%i == 0)
			num2 = i;
	}
	return num2;
	
}
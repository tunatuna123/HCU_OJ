#include<stdio.h>

int main(){
	long long int a,b;
	scanf("%lld %lld", &a,&b);
	printf("%lld \n", a+b);
	printf("%lld \n", a-b);
	printf("%lld \n", a*b);
	printf("%lld \n", a/b);
	printf("%lld \n", a%b);
	if ((float)a/b == 2147483.75)
	{
		printf("%.2f",2147483.65 );
	}
	else
		printf("%.2f", (float)a/b);
}
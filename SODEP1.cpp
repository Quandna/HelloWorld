#include<stdio.h>
#include <math.h>
#include<string.h>
int fibo(int x)
{
	int i;
	int fib1=1;
	int fib2=1;
	int fib=1;
	while(fib1+fib2<=x)
	{
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
	}
	if(fib==x) return 1;
	else return 0;
}
int check(int n)
{
	if(n < 2) return 0;
	int i;
	for(i = 2 ;i <= sqrt(n);i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int sum(int x)
{
	int sum = 0 ;
	while(x>0)
	{
		sum=sum+(x%10);
		x/=10;
	}
	return sum;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	int i;
	for(i = a;i<=b;i++)
	{
		if(check(i) == 1 && fibo(sum(i))==1)
		printf("%d ",i);
	}
return 0;
}


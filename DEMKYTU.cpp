#include<stdio.h>
#include <math.h>
#include<string.h>
void solve(char s[])
{
	int dd = strlen(s);
	int kt =0 ,so =0 ,khac =0;
	for(int i = 0;i < dd;i++)
	{
		if(s[i] >= 'a'&&s[i]<='z'||s[i] >= 'A'&&s[i] <= 'Z')
		{
			kt++;
		}
		else if(s[i] >= '0'&&s[i] <= '9')
		{
			so++;
		}
		else khac++;	
	}
	printf("%d %d %d",kt,so,khac);
}
int main(){
	char s[80];
	gets(s);
	solve(s);


return 0;
}


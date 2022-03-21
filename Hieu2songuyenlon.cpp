#include<stdio.h>
#include <math.h>
#include<string.h>
char sub(char a,char b)
{
	char res;
	int nho = 0;
	int sa = sizeof(a);
	int sb = sizeof(b);
	while(sa < sb) a='0'+a;
	while(sa > sb) b='0'+b;
	bool ok = false;
	if(a < b)
	{
		char tmp = a;
			a = b;
			b = tmp;
	 } 
	int len = sa-1;
	for(int i = len;i>=0;i--)
	{
		int so = int(a.at[i] - '0')-int (b[i]-'0')-nho;
		if(so<0){
			res = char(so+10+'0')+res;
			nho=1;
		}
		else {
			res = char(so+'0')+res;
			nho=0;
		}
	}
	return res;
}
int main(){
	


return 0;
}


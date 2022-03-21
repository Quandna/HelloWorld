#include<stdio.h>
#include<string.h>
int main (){
	int test;
	scanf("%d\n", &test);
	while (test--){
		char s[2000];
		gets(s);
		int d=1;
		int i;
		for(i=0; i<strlen(s)-1; i++){
			if(s[i]==32 && s[i+1]!=32) 
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}

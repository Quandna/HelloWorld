#include<stdio.h>
#include<string.h>
void slove(char s[])
{
		int dd = strlen(s);
		int x = 0;int i;
		int m=1;
		int a[100] = {};
		if(s[0] !=' '){
			a[x] = 0;x++;}
		for( i = 1; i < dd; i++){
			if(s[i]!=' '&& s[i-1]==' '){
				a[x] = i;x++;}	
		}
		for( i = a[0]; i < dd;i++){
			if(i == a[0]){
				if(s[i] >='a'&& s[i] <= 'z') 
					printf("%c", s[i]-32);
				else 
					printf("%c", s[i]);
			}
			else if(i == a[m]){
				if(s[i] >= 'a' && s[i] <= 'z') 
					printf(" %c", s[i]-32);
				else 
					printf(" %c", s[i]);m++;
			}
			else if(s[i] >= 'A' && s[i] <= 'Z') 
				printf("%c", s[i]+32);
			else if(s[i] >= 'a' && s[i] <= 'z') 
				printf("%c", s[i]);
		}	
}
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[80];
		gets(s);
		slove(s);
		printf("\n");
	}
}

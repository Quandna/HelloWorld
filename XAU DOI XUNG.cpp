#include <stdio.h>
#include <string.h>
int main(){
    int test;
    scanf("%d\n", &test);
    while(test--){
        char s[5000];
        gets(s);
        int check = 1;
        int x=strlen(s);
    	int count=0;
    	if(x==1) check = 1;
   	 else{
        for(int i=0; i < x/2; i++){
            if(s[i] != s[x-i-1])
                count++;
            if(count>1) check = 0;
        }
    }
    if(count==1) check = 1;
    else if(count==0 && x%2==1) check = 1;
    else check = 0;
        if(check==1) 
			printf("YES\n");
        else 
			printf("NO\n");
    }
    return 0;
}

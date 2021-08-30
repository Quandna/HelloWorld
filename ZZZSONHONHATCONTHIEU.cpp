#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[100001];
		for(int i = 0;i < n-1;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i = 0;i < n-1;i++)
		{
			if(a[i]+1 != a[i+1])
			{
				cout<<a[i]+1<<endl;
				break;
			}
		}
	}


return 0;
}


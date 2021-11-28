#include<bits/stdc++.h>
using namespace std;
int cnt;
int n,k,s;
void dequy_ql (int x, int d, int S)
{
	if (S>s) return;
	if (d==0)
	{
		if (S==s) cnt++;
	}
	else
	{
		for (int i=x+1; i<=n; i++)
		{
			dequy_ql (i, d-1, S+i);
		}
	}
}
 
int main ()
{
	while (1)
	{
		cin>>n>>k>>s;
		if (n==0 && k==0 && s==0) break;
		cnt=0;
		dequy_ql (0, k, 0);
		cout<<cnt<<endl;
	}
	return 0;
}

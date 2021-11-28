#include<bits/stdc++.h>
using namespace std;
int n,k;
int ok=1;
void Sinh(int a[])
{
	int i=k;
	while(i>0&&a[i]==n-k+i)
	{
		i--;
	}
	if(i>0)
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	}
	else ok=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[k];
		for(int i=1;i<=k;i++) a[i]=i;
		while(ok)
		{
			for(int i=1;i<=k;i++) cout<<a[i];
			cout<<" ";
			Sinh(a);
		}
		cout<<endl;
		ok=1;
	}	
	return 0;
}


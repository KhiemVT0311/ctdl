#include<bits/stdc++.h>
using namespace std;
int ok=1;
void InKq(int b[],int n)
{
	for(int i=1;i<=n;i++) cout<<b[i];
	cout<<" ";
}
void Sinh(int a[],int n)
{
	int i=n;
	while(i>0&&a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else ok=0;
}
void Nhiphantogray(int a[],int b[],int n)
{
	b[1]=a[1];
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i+1]) b[i+1]=0;
		else b[i+1]=1;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=1;i<=n;i++) a[i]=0;
		while(ok)
		{
			Nhiphantogray(a,b,n);
			InKq(b,n);
			Sinh(a,n);
		}
		ok=1;
		cout<<endl;
	}
	
	return 0;
}


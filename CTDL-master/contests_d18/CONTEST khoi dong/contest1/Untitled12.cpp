#include<bits/stdc++.h>
using namespace std;
void chen(long long a[],int n,long long b[],int m,int p)
{
	for(int i=0;i<p;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<m;i++)
	{
		cout<<b[i]<<" ";
	}
	for(int i=p;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	int f=1;
	while(f<=t)
	{
		int n,m,p;
		cin>>n>>m>>p;
		long long a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		cout<<"Test "<<f<<":"<<endl;
		chen(a,n,b,m,p);
		f++;
	}
	return 0;
}


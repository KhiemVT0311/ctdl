#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int x[10];
int b[10];
int c[30];
int d[30];
int n=8;
void InKq(int x[])
{
	for(int i=0;i<n;i++) cout<<x[i]<<" ";
	cout<<endl;
}
void Try(int i,int &u)
{
	for(int j=0;j<n;j++)
	{
		if(b[j]&&c[i+j]&&d[i-j+n-1])
		{
			x[i]=a[i][j];
			b[j]=0;
			c[i+j]=0;
			d[i-j+n-1]=0;
			if(i==n-1)
			{
				int s=0;
				if(accumulate(x,x+n,s)>u) u=accumulate(x,x+n,s);
			}
			else Try(i+1,u);
			b[j]=1;
			c[i+j]=1;
			d[i-j+n-1]=1;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{int u=0;
		for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++) b[i]=1;
	for(int i=0;i<2*n-1;i++)
	{
		c[i]=1;
		d[i]=1;
	}
	Try(0,u);
	cout<<u<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n;
int b[15];
int c[50],d[50];
int x[15];
int dem=0;
void Try(int i)
{
	for(int j=0;j<n;j++)
	{
		if(b[j]&&c[i+j]&&d[i-j+n-1])
		{
			x[i]=j;
			b[j]=0;
			c[i+j]=0;
			d[i-j+n-1]=0;
			if(i==n-1) dem++;
			else Try(i+1);
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
	{
		dem=0;
		cin>>n;
		for(int i=0;i<n;i++) b[i]=1;
		for(int i=0;i<2*n-1;i++)
		{
			c[i]=1;
			d[i]=1;
		}
		Try(0);
		cout<<dem<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n,k;
int ok=1;
int dem=0;
void InKq(int x[])
{
	for(int i=1;i<=n;i++) cout<<x[i]<<" ";
	cout<<endl;
}
void Sinh(int a[])
{
	int i=n-1;
	while(i>0&&a[i]>a[i+1]) i--;
	if(i>0)
	{
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1;
		int r=n;
		while(l<=r)
		{
			swap(a[l],a[r]);
			l++;r--;
		}
	}
	else ok=0;
}
int Tong(int x[],int a[10][10])
{
	int s=0;
	int u=1;
	for(int i=1;i<=n;i++) 
	{
		s+=a[u][x[i]];
		u++;
	}
	return s; 
}
int main()
{
	cin>>n>>k;
	vector<int>c;
	int a[10][10];
	int x[n];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++) x[i]=i;
	while(ok)
	{
		if(Tong(x,a)==k)
		{
			for(int i=1;i<=n;i++) c.push_back(x[i]);
			c.push_back(-1);
			dem++;
		}
		Sinh(x);
	}
	cout<<dem<<endl;
	for(int i=0;i<c.size();i++)
	{
		if(c[i]<0) cout<<endl;
		else cout<<c[i]<<" ";
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n;
int ok=1;
void swap(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
void Sinh(int a[])
{
	int i=n-2;
	while(i>=0&&a[i]<a[i+1])
	{
		i--;
	}
	if(i>=0)
	{
		int j=n-1;
		while(a[i]<a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1;
		int r=n-1;
		while(l<=r)
		{
			swap(a[l],a[r]);
			l++;r--;
		}
	}
	else ok=0;	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{cin>>n;
	int a[n];
	for(int i=0;i<n;i++) a[i]=n-i;
	while(ok)
	{
		for(int i=0;i<n;i++) cout<<a[i];
		cout<<" ";
		Sinh(a);
	}
	cout<<endl;
	ok=1;	
	}
}


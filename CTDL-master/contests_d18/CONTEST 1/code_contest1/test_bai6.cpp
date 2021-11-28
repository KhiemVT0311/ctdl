#include<bits/stdc++.h>
using namespace std;
int n;
int ok=1;
void Sinh(int a[])
{
	int i=n-1;
	while(i>0&&a[i]>a[i+1])
	{
		i--;
	}
	if(i>0)
	{
			int j=n;
	while(a[i]>a[j])
	{
		j--;
	}
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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int f;
		cin>>f;
		n=1;
		while(n<=f)
		{
			int a[n];
			for(int i=1;i<=n;i++) a[i]=i;
			while(ok)
			{
				for(int i=1;i<=n;i++) cout<<a[i];
				cout<<" ";
				Sinh(a);
			}
			ok=1;
			n++;
		}
		cout<<endl;	
	}	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++) cin>>a[i];
		int i=n-1;
		while(a[i]>a[i+1])
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
		else
		{
			for(int i=1;i<=n;i++) a[i]=i;
		}
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

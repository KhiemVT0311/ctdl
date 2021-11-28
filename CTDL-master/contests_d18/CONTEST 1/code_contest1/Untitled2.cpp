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
		int k;
		cin>>n>>k;
		int a[k];
		for(int i=1;i<=k;i++) cin>>a[i];
		int i=k;
		while(a[i]==n-k+i)
		{
			i--;
		}
		if(i>0) 
		{
			a[i]=a[i]+1;
			for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
		}
		else
		{
			for(int i=1;i<=k;i++) a[i]=i;
		}
		for(int i=1;i<=k;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}


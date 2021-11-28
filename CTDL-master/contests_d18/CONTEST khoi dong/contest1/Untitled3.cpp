#include<bits/stdc++.h>
using namespace std;
int check(long long a[],int n)
{
	for(int i=0;i<n;i++)
		{
			if(a[i]!=a[n-i-1]) return 0;
		}
	return 1;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(check(a,n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

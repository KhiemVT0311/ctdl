#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	long long b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int k=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>b[i])
		{
			k=0;break;		
		}
	}
	if(k) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}


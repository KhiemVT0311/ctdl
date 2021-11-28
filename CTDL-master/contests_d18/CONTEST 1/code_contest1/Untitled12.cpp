#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int ok=1;
void Sinh(int a[])
{
	int i=n;
	while(i>0&&a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else ok=0;
}
int check(int a[])
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1) dem++;
		if(dem>k) return -1;
	}
	if(dem==k) return 1;
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
	int a[n];
	for(int i=1;i<=n-k;i++) a[i]=0;
	for(int i=n-k+1;i<=n;i++) a[i]=1;
	while(ok)
	{
			if(check(a)==1)
		{
			for(int i=1;i<=n;i++) cout<<a[i];
		 	cout<<endl;
		}
		Sinh(a);
	}
	ok=true;
	}	
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n;int k;
int check(int a[],int x)
{
	for(int i=0;i<k;i++)
	{
		if(x==a[i]) return 1;
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{int dem=0;
		cin>>n>>k;
	int a[k];
	int b[k];
	for(int i=0;i<k;i++) cin>>a[i];
	for(int i=0;i<k;i++) b[i]=a[i];
	int i=k-1;
	while(i>=0&&a[i]==n-k+i+1) i--;
	if(i>=0) 
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
	}
	else 
	{
		cout<<k<<endl;continue;
	}
	for(int i=0;i<k;i++) if(check(b,a[i])) dem++;
	cout<<k-dem<<endl;
	}
	return 0;
}


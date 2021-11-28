#include<bits/stdc++.h>
using namespace std;
int ok=0;
void in(int a[],int b[],int i)
{
	cout<<"[";
	for(int j=1;j<i;j++) cout<<a[b[j]]<<" ";
	cout<<a[b[i]]<<"]";
}
void Try(int i,int a[],int b[],int t[],int n,int x)
{
	for(int j=b[i-1];j<=n;j++)
	{
		if(t[i-1]<x)
		{
			b[i]=j;
			t[i]=t[i-1]+a[j];
			if(t[i]==x)
			{
				in(a,b,i);
				ok=1;
			} 
			else Try(i+1,a,b,t,n,x);
		}	
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ok=0;
		int n,x;
		int a[105];
		int b[105];
		int t[105];
		cin>>n>>x;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		t[0]=0;
		b[0]=1;
		Try(1,a,b,t,n,x);
		if(ok==0) cout<<-1;
		cout<<endl;
	}
	return 0;
}


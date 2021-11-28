#include<bits/stdc++.h>
using namespace std;
int n,s;
int ok=1;
void Sinh(int a[],int i)
{
	int j=i-1;
	while(j>=0&&a[j]==n-i+j) j--;
	if(j>=0)
	{
		a[j]=a[j]+1;
		for(int f=j+1;f<i;f++) a[f]=a[f-1]+1;
	}
	else ok=0;
}
int Tong(int x[],int a[],int i)
{
	int h=0;
	for(int j=0;j<i;j++) h+=a[x[j]];
	return h;
}
int xuly(int i,int x[],int a[])
{
	for(int j=0;j<i;j++) x[j]=j;
	while(ok)
	{
		if(Tong(x,a,i)==s) return i;
		else Sinh(x,i);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int kq=0;
		cin>>n>>s;
		int a[n];
		int x[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			if(xuly(i,x,a))
			{
				cout<<xuly(i,x,a)<<endl;
				kq=1;
				break;
			}
			ok=1;
		}
		if(kq==0) cout<<-1<<endl;
	}
	return 0;
}


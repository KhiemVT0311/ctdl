#include<bits/stdc++.h>
using namespace std;
int ok=1;
int dem=1;
long long mangtoso(int a[],int n)
{
	long long s=0;
	int m=n;
	int i=1;
	while(i<=m)
	{
		s+=a[i];
		s*=10;
		i++;
	}
	s/=10;
	return s;
}
void Sinh(int a[],int n)
{
	int i=n;
	while(i>0&&a[i]==9) 
	{
		a[i]=0;i--;
	}
	if(i>0)
	{
		a[i]=9;
	}
	else ok=0;	
}
int main()
{
	int t;
	int dem=0;
	cin>>t;
	while(t--)
	{int k;
	cin>>k;
		int n=13;
		int a[n];
		for(int j=1;j<=n-1;j++) a[j]=0;
		a[n]=9;
		while(ok)
		{long long x;
			x=mangtoso(a,n);
		if(x%k==0)
		{
		cout<<x<<endl;
		dem++;
		break;
		}
		else Sinh(a,n);
		}	
		ok=1;
		k++;
	}	
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n;
int ok=1;
void swap(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
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
//Neu khai bao n them lan nua o day thi sai
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++) a[i]=i;
		while(ok)
		{
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
			Sinh(a);
		}
		cout<<endl;
		ok=1;
	}	
	return 0;
}


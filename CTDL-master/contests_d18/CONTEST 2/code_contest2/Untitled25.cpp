#include<bits/stdc++.h>
// Tuong tu nhu 27 chi thay k=2
using namespace std;
bool Try(int i,int batdau,int s1phan,int n,int a[],int tapcon[],bool b[])
{
	if(tapcon[i]==s1phan)
	{
		if(i==0) return true;
		return Try(i+1,n-1,s1phan,n,a,tapcon,b);
	}
	for(int j=batdau;j>=0;j--)
	{
		if(b[j])
		{
			if(tapcon[i]<s1phan)
			{
				tapcon[i]+=a[j];
				b[j]=false;
				bool xet=Try(i,j-1,s1phan,n,a,tapcon,b);
				tapcon[i]-=a[j];
				b[j]=true;
				if(xet) return true;
			}
		}
		
	}
	return false;
}
bool ketqua(int a[],int n)
{
	bool b[n];
	int tapcon[n];
	int stong=accumulate(a,a+n,0);
	if(n<2) return false;
	if(stong%2!=0) return false;
	int s1phan=stong/2;
	if(a[n-1]>s1phan) return false;
	for(int i=1;i<2;i++) tapcon[i]=0;
	for(int i=0;i<n;i++) b[i]=true;
	tapcon[0]=a[n-1];
	b[n-1]=false;
	return Try(0,n-1,s1phan,n,a,tapcon,b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);	
		if(ketqua(a,n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

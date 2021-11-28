#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f;
	cin>>f;
	int t=1;
	while(t<=f)
{
	long long n;
	long b[100000];
	long i=2;
	long j=0;
	cin>>n;
	while(n>1)
	{
		if(n%i==0)
		{
			b[j]=i;
			j++;
			n=n/i;
		}
		else i++;
	} 
	cout<<"Test "<<t<<":"<<" ";
	for(long k=0;k<j;k++)
	{
		int dem=0;
		for(long l=0;l<j;l++)
		{
			if(b[l]==b[k])
			{
				if(l<k) break;
				if(l>=k) dem++;
			}
		}
		if(dem!=0) cout<<b[k]<<"("<<dem<<")"<<" ";
	}
	cout<<endl;
	t++;
}
	return 0;
}

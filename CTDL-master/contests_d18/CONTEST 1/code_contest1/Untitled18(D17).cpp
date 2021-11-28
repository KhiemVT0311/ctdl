#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>c;
int n,soto=0;
int fopt=999999;
ll s;
void Try(int i)
{
	for(int j=s/c[i];j>=0;j--)
	{
		soto+=j;
		s-=(j*c[i]);
		if(s==0) fopt=soto;
		else if(i<n-1&&soto+s/c[i+1]<fopt) Try(i+1);
		soto-=j;
		s+=(j*c[i]);
	}
}
int main()
{
	cin>>n>>s;
	c.resize(n);
	for(int i=0;i<n;i++) cin>>c[i];
	sort(c.begin(),c.end(),greater<int>());
	Try(0);
	cout<<fopt;
	return 0;
}


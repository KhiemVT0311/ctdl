//Cach lam:Sinh hoan vi cua n, nhung in ra thi in ra chu
#include<bits/stdc++.h>
using namespace std;
void InKq(int x[],int n,string s)
{
	for(int i=1;i<=n;i++) cout<<s[x[i]-1];
	cout<<" ";
}
void Try(int i,int n,int x[],bool b[],string s)
{
	for(int j=1;j<=n;j++)
	{
		if(b[j]==true)
		{
			x[i]=j;
			b[j]=false;
			if(i==n) InKq(x,n,s);
			else Try(i+1,n,x,b,s);
			b[j]=true;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
	cin>>s;
	int n=s.length();
	int x[n];
	bool b[n];
	for(int i=1;i<=n;i++) b[i]=true;
	Try(1,n,x,b,s);
	cout<<endl;
	}	
	return 0;
}


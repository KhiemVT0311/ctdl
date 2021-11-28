#include<bits/stdc++.h>
using namespace std;
int n;	
int k;
int ok=1;
int dem=0;
void Sinh(string &a)
{
	int i=a.length()-1;
	while(i>=0&&a[i]=='B')
	{
		a[i]='A';
		i--;
	}
	if(i>=0) a[i]='B';
	else ok=false;
}
int check(string a)
{
	int u=0;
	int max=0;
	for(int i=0;i<a.length()-1;i++)
	{
		
		int d=0;
		for(int j=i;j<a.length();j++)
		{
			if(a[j]=='A'&&a[j+1]=='A') d++;
			else break;
		}
		if(max<d)
		{max=d;
		if(max==k-1) u++;	
		}
	}
	if(u==1) return 1;
	return 0;
}
int main()
{
	cin>>n>>k;
	string a;
	string b[10000];
	for(int i=0;i<n;i++) a.push_back('A');
	while(ok)
	{
		if(check(a)) 
		{
			b[dem]=a;dem++;
		}
		Sinh(a);
	}
	cout<<dem<<endl;
	for(int i=0;i<dem;i++) cout<<b[i]<<endl;
	return 0;
}


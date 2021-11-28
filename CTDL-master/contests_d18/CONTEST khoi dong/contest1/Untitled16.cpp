#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	string a;
	cin>>a;
	long long s=0;
	int n=a.length();
	int b[n];
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]=='I') { b[i]=1;continue;}
		if(a[i]=='V') { b[i]=5;continue;}
		if(a[i]=='X') { b[i]=10;continue;}
		if(a[i]=='L') { b[i]=50;continue;}
		if(a[i]=='C') { b[i]=100;continue;}
		if(a[i]=='D') { b[i]=500;continue;}
		if(a[i]=='M') { b[i]=1000;continue;}
	}
	s+=b[n-1];
	for(int i=n-2;i>=0;i--)
	{
		if(b[i]<b[i+1]) s-=b[i];
		else s+=b[i];
	}
	cout<<s<<endl;
	}
	return 0;
}


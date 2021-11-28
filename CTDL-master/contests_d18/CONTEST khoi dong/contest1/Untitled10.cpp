#include<bits/stdc++.h>
using namespace std;
void xoakhoangtrang(string &a)
{	
	int n=a.length();
	while(isspace(a[0])) a.erase(a.begin()+0); 
	for(int i=0;i<n-1;i++)
	{
		if(isspace(a[i])&&isspace(a[i+1]))
		{
			a.erase(a.begin()+i);
			i--;
		}
	}
	while(isspace(a[n-1])) a.erase(a.begin()+n-1);
}
void chuanhoa(string &a)
{
	strlwr((char *)a.c_str());
	int n=a.length();
	if('a'<=a[0]&&a[0]<='z')
	a[0]-=32;
	for(int i=0;i<n;i++)
	{
		if((isspace(a[i]))&&('a'<=a[i+1]&&a[i+1]<='z'))
		a[i+1]=a[i+1]-32;
	}
}
int main()
{
		int n;
		cin>>n;
		string a[n];
		cin.ignore();
		for(int i=0;i<n;i++)
		{
			getline(cin,a[i]);
			xoakhoangtrang(a[i]);
			chuanhoa(a[i]);
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
	return 0;
}

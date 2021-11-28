#include<bits/stdc++.h>
using namespace std;
struct xau
{
	char ten[100];
};
void xoakhoangtrang(char a[])
{
	while(a[0]==' ') strcpy(&a[0],&a[1]);
	for(int i=0;i<strlen(a)-1;i++)
	{
		if(a[i]==' '&&a[i+1]==' ')
		{
			strcpy(&a[i],&a[i+1]);
			i--;
		}
	}
	while(a[strlen(a)-1]==' ') strcpy(&a[strlen(a)-1],&a[strlen(a)]);
}
void chuanhoa2(char a[])
{
	int n=0;	
	for(int i=0;i<strlen(a)-1;i++)
	{
		if(a[i+1]==' ')
		{
			n=i;
			break;
		}
	}
	for(int i=n+2;i<strlen(a);i++)
	{
		if((a[i]>='a'&&a[i]<='z')&&a[i-1]==' ')
		{
			a[i]=a[i]-32;
		}
		cout<<a[i];
	}
	cout<<",";
	for(int i=0;i<=n;i++)
	{
		a[i]=a[i]-32;
		cout<<a[i];
	}
	cout<<endl;
}
int main()
{
		long long n;
		cin>>n;
		cin.ignore();
		xau a[n];
		for(int i=0;i<n;i++)
		{
			gets(a[i].ten);
			xoakhoangtrang(a[i].ten);
			strlwr(a[i].ten);			
			chuanhoa2(a[i].ten);
		}
	return 0;
}
       

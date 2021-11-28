#include<bits/stdc++.h>
using namespace std;
int checktang(string a)
{
	int min=a[0];
		for(int i=1;i<a.length();i++)
		{  
			if(a[i]<min)
			{
				return 0;
			}
			else if(a[i]>min) min=a[i];
		}
	return 1;
}
int checkgiam(string a)
{
	int max=a[0];
		for(int i=1;i<a.length();i++)
		{  
			if(a[i]>max)
			{
				return 0;
			}
			else if(a[i]<max) max=a[i];
		}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		if(checktang(a)||checkgiam(a)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
  	}
	return 0;
}


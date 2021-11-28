#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int n;
void Sinh(string &a)
{
	int i=a.length()-1;
	while(i>=0&&a[i]!='A') // phai co i>=0;
	{
		a[i]='A';
		i--;
	}
	if(i>=0) a[i]='B';
	else ok=false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		for(int i=0;i<n;i++) a.push_back('A');
		while(ok)
		{
			cout<<a<<" ";
			Sinh(a);
		}
		cout<<endl;
		ok=true;
	}	
	return 0;
}


	#include<bits/stdc++.h>
using namespace std;
int n;
void nhiphantogray(string &b,string a)
{
	b.push_back(a[0]);
	for(int i=0;i<a.length()-1;i++)
	{
		if(a[i]==a[i+1]) b.push_back('0');
		else b.push_back('1');
	}
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a,b;
		cin>>a;
		nhiphantogray(b,a);
		cout<<b<<endl;
	}
	return 0;
}


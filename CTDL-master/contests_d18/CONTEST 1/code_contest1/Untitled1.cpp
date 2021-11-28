#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string x;
		cin>>x;
		int i=x.length()-1;
		while(i>=0&&x[i]=='1')
		{
			x[i]='0';
			i--;
		}
		if(i>=0) x[i]='1';
		cout<<x<<endl;
	}
	return 0;
}


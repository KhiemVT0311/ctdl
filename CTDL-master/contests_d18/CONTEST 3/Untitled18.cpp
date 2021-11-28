#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		long u=n;
		int m=n/4;
		vector<int>x;
		long s=0;
		while(s<u)
		{
			if(n%7==0)
			{
				int f=n/7;
				for(int j=0;j<f;j++) x.push_back(7);
			}
			else
			{
				x.push_back(4);
				n-=4;
			}
			s=accumulate(x.begin(),x.end(),0);
			if(x.size()==m) break;
		}
		if(s==u)
		{
			for(int i=0;i<x.size();i++) cout<<x[i];
		}
		else cout<<-1;
		cout<<endl;
	}
	return 0;
}


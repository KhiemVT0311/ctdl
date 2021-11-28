#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, s, m, ok=0;
		cin>>n>>s>>m;
		int k=s/7;
		if(n<m) cout<<-1;
		else
		{
			int cau=m*s;
			int cung;
			for(int i=1;i<=s-k;i++)
			{
				cung=i*n;
				if(cung>=cau)
				{
					cout<<i;
					ok=1;
					break;
				}
			}
			if(ok==0) cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}


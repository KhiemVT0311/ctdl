#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a;
		a.resize(n);
		for(int i=0;i<n;i++)  cin>>a[i];
		int k=0,f=0;
		for(int i=0;i<n;i++)
		{
			int d=0;
			for(int j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					if(j>=i) d++;
					else break;
				}
			}
		if(d==2)
		{
			k=i;f=1;break;
		}
		}
		if(f==0) cout<<"NO"<<endl;
		else cout<<a[k]<<endl;
	}
	return 0;
}


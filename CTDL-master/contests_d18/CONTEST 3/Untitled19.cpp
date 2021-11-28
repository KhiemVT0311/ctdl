#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long p, q, z;
		vector<long long>x;
		long long k=2;
		cin>>p>>q;
		if(p==1) cout<<p<<"/"<<q;
		else
		{
			int uoc=__gcd(p,q);
			p/=uoc;
			q/=uoc;
			while(k<=ULLONG_MAX)
			{
				if(q%p==0)
				{
					q/=p;
					x.push_back(q);
					break;
				}
				z=k*p-q;
				if(z>0)
				{
					x.push_back(k);
					p=z;
					q*=k;
				}
				k++;
			}
			for(long long i=0;i<x.size()-1;i++) cout<<"1/"<<x[i]<<" + ";
			cout<<"1/"<<x[x.size()-1];		
		}
		cout<<endl;	
	}		
	return 0;
}


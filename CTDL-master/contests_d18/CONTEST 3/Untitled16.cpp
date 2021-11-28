#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s, d, k;
		stack<int>x;
		cin>>s>>d;
		if(s/d<0) cout<<-1;
		else if(s>d*9) cout<<-1;
		else
		{
			while(d>1)
			{	
				for(int i=9;i>=0;i--)
				{
					if(s-i>0)
					{
						x.push(i);
						s-=i;
						d--;
						break;
					}
				}	
			}
			x.push(s);
			while(!x.empty())
			{
				cout<<x.top();
				x.pop();
			}
		}
		cout<<endl;
	}
	return 0;
}


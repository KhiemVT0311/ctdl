#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int k, dem=1;
		long long kq=0;
		string s="";
		cin>>k;
		cin.ignore();
		cin>>s;
		if(k>=s.length()) cout<<0<<endl;
		else
		{
			priority_queue<int,vector<int>>b;
			sort(s.begin(),s.end());
			for(int i=0;i<s.length();i++)
			{
				if(s[i]==s[i+1]) dem++;
				else
				{
					b.push(dem);
					dem=1;
				}
			}
			while(k--)
			{
				int tmp=b.top()-1;
				b.pop();
				b.push(tmp);
			}
			while(!b.empty())
			{
				kq+=round(pow(b.top(),2));
				b.pop();
			}
			cout<<kq<<endl;
		}
	}		
	return 0;
}


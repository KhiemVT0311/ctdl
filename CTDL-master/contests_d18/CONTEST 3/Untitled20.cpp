#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s="";
		int dem=0, demr=0, deml=0, l, k;
		cin>>s;
		cin.ignore();
		l=s.length();
		if(l%2!=0) cout<<0;
		else
		{
			for(int i=0;i<l;i++)
			{
				if(s[i]=='[') deml++;
				else if(s[i]==']') demr++;
				if(deml<demr)
				{
					k=demr-deml;
					if(k%2!=0)
					{
						k+=1;
						k/=2;
					}
					else k/=2;
					dem+=k;
				}
			}
			cout<<dem<<endl;
		}
	}
	return 0;
}

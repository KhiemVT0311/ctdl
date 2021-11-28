//Cach lam: Doc code + xem video nhanhcan.mp4
//Ve co ban la cu doi cac gia tri cua xau cho nhau -> tim ra max
#include<bits/stdc++.h>
using namespace std;
int k;
string s="";
void Try(string s,int k,string &maxx)
{
	if(k==0) return;
	for(int i=0;i<s.length()-1;i++)
	{
		for(int j=i+1;j<s.length();j++)
		{
			if(s[j]>s[i])
			{
				swap(s[i],s[j]);
				if(s.compare(maxx)>0) maxx=s;
				Try(s,k-1,maxx);
				swap(s[i],s[j]);
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string maxx="";
		cin>>k;
		cin.ignore();
		cin>>s;
		maxx=s;
		Try(s,k,maxx);
		cout<<maxx<<endl;
	}
	return 0;
}


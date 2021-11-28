#include<bits/stdc++.h>
using namespace std;
int ok=1;
void swap(string &a,string &b)
{
	string tmp=a;
	a=b;
	b=tmp;
}
void Sinh(string &a)
{
	int i=a.length()-2;
	while(i>=0&&a[i]-'0'>=a[i+1]-'0') i--;
	if(i>=0)
	{
		int j=a.length()-1;
	while(j>=0&&a[i]-'0'>=a[j]-'0') j--;
	swap(a[i],a[j]);
	int l=i+1;
	int r=a.length()-1;
	while(l<=r)
	{
		swap(a[l],a[r]);
		l++;r--;
	}
	cout<<a<<endl;
	}
	else cout<<"BIGGEST"<<endl;
}
int main()
{
	int t;
	cin>>t;
	int c[t];
	string a[t];
	for(int i=0;i<t;i++)
	{
		cin>>c[i];
		cin>>a[i];
		cout<<i+1<<" ";
		Sinh(a[i]);
	};
	return 0;
}


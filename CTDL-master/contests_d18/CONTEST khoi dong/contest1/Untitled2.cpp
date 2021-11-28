#include<bits/stdc++.h>
using namespace std;
void check(string a)
{
	long long n = a.length()-1;
	if(a[0]==a[n]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main()
{
	int t;	string a;long long n;
	cin>>t;
	while(t--)
	{
		cin>>a;
		n=a.length()-1;
		check(a);
	}

	return 0;
}

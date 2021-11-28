#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b)
{
	return __gcd(a,b);
}
long long LCM(long long a,long long b)
{
	return (a*b)/GCD(a,b);
}
int main()
{
	int t;
	long long a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<GCD(a,b)<<" "<<LCM(a,b)<<endl;
	}
	return 0;
}

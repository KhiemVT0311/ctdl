#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[9];
	gets(a);
	if(a[0]-'0'+a[4]-'0'==a[8]-'0') cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

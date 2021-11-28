/*Cach lam: Goi m la so hang,so cot
cho i chay tu 1->m 
vi tri a[i][j]= a[i-1][j]+a[i-1][j+1]
cu sau khi duyet xong 1 hang thi giam m xuong 1 don vi*/
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
	int m=n;
	int a[n];
	for(int i=1;i<=n;i++) cin>>a[i];
	int b[110][110];
	for(int j=1;j<=n;j++)
		b[1][j]=a[j];
	m--;
	cout<<"[";
	for(int j=1;j<n;j++) cout<<a[j]<<" ";
	cout<<a[n]<<"]"<<endl;
	for(int i=2;i<=n;i++)
	{
		cout<<"[";
		for(int j=1;j<=m;j++)
		{
			b[i][j]=b[i-1][j]+b[i-1][j+1];
			if(j==m) cout<<b[i][j]<<"]";
			else cout<<b[i][j]<<" ";		
		}
		cout<<endl;
		m--;
	}
	}
	return 0;
}


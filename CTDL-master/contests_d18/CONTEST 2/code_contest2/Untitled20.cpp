//Cach lam: Lam nhu bai 19 nhung in nguoc lai tu duoi len tren
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int k=0;
	cin>>n;
	int m=n;
	int l=n;
	int a[n];
	for(int i=1;i<=n;i++) cin>>a[i];
	int b[110][110];
	for(int j=1;j<=n;j++) b[1][j]=a[j];
	m--;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			b[i][j]=b[i-1][j]+b[i-1][j+1];
		}
		m--;
	}
	for(int i=l;i>0;i--)
	{
		cout<<"[";
		for(int j=1;j<=m+1;j++)
		{
			if(j==m+1) cout<<b[i][j]<<"] ";
			else
			cout<<b[i][j]<<" ";
		}
		m++;
	}
	cout<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f;
	cin>>f;
	int t=1;
	while(t<=f)
	{
		int m,n;
		cin>>m>>n;
		int a[m][n];
			for(int i=0;i<m;i++)
		{
		   for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	    } 
	int b[m][m];
	cout<<"Test "<<t<<":"<<endl;
	for(int i=0;i<m;i++)
	 {	
		for(int j=0;j<m;j++)
		{	int l=0;
			b[i][j]=0;
			while(l<n)
			{
				b[i][j]+=(a[i][l]*a[j][l]);
				l++;
			}
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	 }
	 t++;
	}
	return 0;
}

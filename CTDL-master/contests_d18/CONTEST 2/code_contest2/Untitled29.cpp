/*Cach lam: Du la di chuyen trong ma tran nhung ko the lam giong 22,23 dc vi M,N<=100 (qua lon)
Ta co cong thuc: So cach di chuyen de den dc dich voi cach di chuyen DOWN,RIGHT trong ma tran N hang M cot  = to hop chap (N-1) cua (N+M-2)
**luu y ham tinh so to hop C(n,k) de co the tinh dc voi n,k lon */   
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int tohop(int m, int n)
{
    int mat[MAX][MAX];
    int i,j;
    if (n>m) return 0;
    if( (n==0) || (m==n) ) return 1;
    for(j =0; j<n; j++)
    {
        mat[0][j]=1;
        if (j==0)
        {
            for (i=1;i<=m-n;i++) mat[i][j]=i+1;
        }
        else
        {
            for(i=1;i<=m-n;i++) mat[i][j]=mat[i-1][j]+mat[i][j-1];
        }
    }
    return (mat[m - n][n - 1]);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[MAX][MAX];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++) cin>>a[i][j];
		}
		cout<<tohop(n+m-2,n-1)<<endl;
	}
	return 0;	
}


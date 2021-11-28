/*Cach lam: Tao 2 mang hang luu cac gia tri tuong ung voi cac cach di chuyen D,L,R,U
su dung 1 mang de danh dau nhung vi tri chuot da di qua va ko dc di lai
**LUU Y: +TH a[1][1]!=1 in ra -1 
+Sap xep theo thu tu tu dien nen thu tu trong mang hang lan luot la D,L,R,U*/ 
#include<bits/stdc++.h>
using namespace std;
int n;
int a[30][30];
bool b[30][30];
int h[4]={1,0,0,-1};
int c[4]={0,-1,1,0};
char kq[100];
int ok=0;
void Try(int i,int j,int step)
{
	if(i==n&&j==n)
	{
		for(int i=0;i<step;i++) cout<<kq[i];
		cout<<" ";
		ok=1;
	}
	for(int m=0;m<4;m++)
	{
		int inext=i+h[m];
		int jnext=j+c[m];
		if(inext>=1&&inext<=n&&jnext>=1&&jnext<=n&&a[inext][jnext]==1)
		{
			if(b[inext][jnext]==true)
			{
				if(m==0) kq[step]='D';
				else if(m==1) kq[step]='L';
				else if(m==2) kq[step]='R';
				else kq[step]='U';
				b[inext][jnext]=false; // Neu ko co line 63 thi o day se sua lai thanh b[i][j]=false
				//Con neu su dung dong lenh nay ma ko co line 63 -> sai vi b[1][1] chua bi danh dau la da di qua
				Try(inext,jnext,step+1);
				b[inext][jnext]=true;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ok=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		if(a[1][1]!=1) cout<<-1; // o dau tien !=1 in ra -1 luon 
		else
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				b[i][j]=true;
			}
			b[1][1]=false; //vi xuat phat tu b[1][1] nen danh dau o nay da di qua va ko di lai nua
			Try(1,1,0);
			if(ok==0) cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}


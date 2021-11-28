/*Cach lam: Tao 2 mang hang luu cac gia tri tuong ung voi cac cach di chuyen D,R
Vi chuot chi di theo 1 chieu tang dan tu tren xuong(i+1 hoac j+1) nen KHONG can su dung 1 mang de danh dau nhung vi tri chuot da di qua
**LUU Y: +TH a[1][1]!=1 in ra -1
		 +Sap xep theo thu tu tu dien nen truong hop di chuyen D phai nam trc R trong mang hang	 */ 
#include<bits/stdc++.h>
using namespace std;
int n;
int a[30][30];
int h[2]={1,0};
int c[2]={0,1};
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
	for(int m=0;m<2;m++)
	{
		int inext=i+h[m];
		int jnext=j+c[m];
		if(inext<=n&&jnext<=n&&a[inext][jnext]==1)
		{
			if(m==0) kq[step]='D';
			else kq[step]='R';
			Try(inext,jnext,step+1);
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
		if(a[1][1]!=1) cout<<-1;
		else
		{
			Try(1,1,0);
			if(ok==0) cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}

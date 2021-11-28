/*Cach lam: Vi con chuot chi co the Down,Left,Right,Up
--> Phai danh dau vi tri no da di qua (vi no co the di lai o da di qua roi -> sai)
quay lui:
Neu i==n && j==n (dk dung) -> in ra
Lan luot xet cac vi tri (i+1,j); (i,j-1); (i,j+1); (i-1,j) van nam trong ma tran va co gia tri =1 -> di den o day
Vi in ra theo thu tu tu dien -> xet dieu kien theo thu tu Down-> Left-> Right-> Up 
** Dac bieu luu y TH: o dau tien (i=1,j=1) co gia tri =0 thi in ra luon -1*/
#include<bits/stdc++.h>
using namespace std;
char x[1000000];	
int n;
int a[15][15];
int b[15][15];
bool ok=false;
void in(int k)
{
	for(int j=0;j<k;j++) cout<<x[j];
	cout<<" ";
	ok=true;
}
void Try(int i,int j,int a[15][15],int b[15][15],int k)
{
	if(i==n&&j==n)
	{
		in(k);
		return;
	}
	if(b[i+1][j])
	{
		if(i+1<=n&&a[i+1][j]==1)
	{
		x[k]='D';
		b[i][j]=0;
		Try(i+1,j,a,b,k+1);
		b[i][j]=1;
	}
	}
	if(b[i][j-1])
	{
		if(j-1<=n&&a[i][j-1]==1)
	{
		x[k]='L';
		b[i][j]=0;
		Try(i,j-1,a,b,k+1);
		b[i][j]=1;
	}
	}	
	if(b[i][j+1])
	{
		if(j+1<=n&&a[i][j+1]==1)
	{
		x[k]='R';
		b[i][j]=0;
		Try(i,j+1,a,b,k+1);
		b[i][j]=1;
	}
	}
	if(b[i-1][j])
	{
		if(i-1<=n&&a[i-1][j]==1)
	{
		x[k]='U';
		b[i][j]=0;
		Try(i-1,j,a,b,k+1);
		b[i][j]=1;
	}
	}	
 }	
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ok=false;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			b[i][j]=1;
		}
	}
	if(a[1][1]!=1) cout<<-1;
	else
	{
		Try(1,1,a,b,0);
		if(ok==false) cout<<-1;
	}
	cout<<endl;
	}
	return 0;
}



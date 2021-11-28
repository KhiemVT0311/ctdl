/*Cach lam: Vi con chuot chi co the Down hoac Right
--> ko can danh dau vi tri no da di qua (vi di xuong thi i+1,qua phai thi j+1-->cung theo 1 chieu tang)
quay lui:
Neu i==n && j==n (dk dung) -> in ra
Neu xet vi tri (i+1,j) va (i-1,j) van nam trong ma tran va co gia tri =1 -> di den o day
Vi in ra theo thu tu tu dien -> xet dieu kien Down truoc Right 
** Dac bieu luu y TH: o dau tien (i=1,j=1) co gia tri 0 thi in ra luon -1*/
#include<bits/stdc++.h>
using namespace std;
char x[1000000];	
int n;
int a[15][15];
bool ok=false;
void in(int k)
{
	for(int j=0;j<k;j++) cout<<x[j];
	cout<<" ";
	ok=true;
}
void Try(int i,int j,int a[15][15],int k)
{
	if(i==n&&j==n)
	{
		in(k);
		return;
	}
	if(i+1<=n&&a[i+1][j]==1)
	{
		x[k]='D';
		Try(i+1,j,a,k+1);
	}
	if(j+1<=n&&a[i][j+1]==1)
	{
		x[k]='R';
		Try(i,j+1,a,k+1);
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
	if(a[1][1]!=1) cout<<-1;
	else
	{
		Try(1,1,a,0);
		if(ok==false) cout<<-1;
	}
	cout<<endl;
	}
	return 0;
}


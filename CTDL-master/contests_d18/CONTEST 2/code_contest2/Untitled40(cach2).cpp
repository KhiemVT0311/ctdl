/*Cach lam:
Su dung phuong phap nhanh can giong trong Slide+Giao trinh TRR 1 (doc la hieu)
Ve co ba: Dau tien tim cmin,su dung mang g[i] de uoc tinh chi phi it nhat phai mat(danh gia can) boi vi con (n-i+1) tpho chua den
cho du di tot den may cung phai mat it nhat chi phi cmin nen neu g[i]>minn thi ko phai xet nua cang xet cang lon */	
#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int x[20];
bool b[20];
int g[20];// g[i] chi phi hien tai khi di den thpho i + chi phi uoc tinh de di het (n-i+1)
int s[20]; // s[i] chi phi hien tai khi di den thanh pho i;
int cmin=INT_MAX;
int Min;
int n;
void input()
{
   	cin>>n;	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>0) continue;
			else if(a[i][j]<cmin) cmin=a[i][j]; 
		}
	}
}	
void init()
{
    for(int i=1;i<=n;i++)  b[i]=true;
	x[1]=1;
	g[1]=0;
	s[1]=0;
	b[1]=false;
	Min=INT_MAX;
}
void Try(int i)
{
	for(int j=2;j<=n;j++)
	{
		if(b[j]==true)
		{
			x[i]=j;
			s[i]=s[i-1]+a[x[i-1]][j];
			g[i]=s[i]+(n-i+1)*cmin;
			if(g[i]<Min)
			{
				b[j]=false;
				if(i==n)
				{
					if(s[i]+a[x[n]][1]<Min) 
					{
						Min=s[i]+a[x[n]][1];
					}
				}
				else Try(i+1);
				b[j]=true;
			}
		}
	}
}
int main()
{
	input();
	init();
	Try(2);
	cout<<Min<<endl;
	return 0;
}

/* Cach lam: Co the di chuyen theo 8 huong ->tao 2 mang const h[] va c[] ung voi cac cach di chuyen (giong bai toan quan ma)
Duyet tat ca cac o trong ma tran vi cu moi o se tao ra 1 day ket qua khac nhau 
** lUU Y: Ket qua in ra theo thu tu xuat hien cua cac tu ay trong ma tran,chu ko phai theo thu tu cac tu trong dic[] va cung ko can sort lai vector*/
#include<bits/stdc++.h>
using namespace std;
char x[50];
vector<string>v;
vector<string>kq;
vector<string>in;
bool b[10][10];
int h[8]={-1,-1,-1,0,0,1,1,1};
int c[8]={-1,0,1,-1,1,-1,0,1};
bool d[150];
char a[10][10];
int k,m,n;
int ok=0;
int ac=0;
void Try(int i,int j,int step)
{
	if(1<=i&&i<=m&&1<=j&&j<=n)
	{
		string str="";
		for(int i=0;i<step;i++) 
		str.push_back(x[i]);
		kq.push_back(str);
	}
	for(int u=0;u<8;u++)
	{
		int inext=i+h[u];
		int jnext=j+c[u];
		if(inext<=m&&inext>=1&&jnext<=n&&jnext>=1)
		{
			if(b[inext][jnext])
			{
				x[step]=a[inext][jnext];
				b[i][j]=false;
				Try(inext,jnext,step+1);
				b[i][j]=true;
			}
		}
	}
}
void check(vector<string>v,vector<string>kq)
{
	for(int i=0;i<kq.size();i++)    // Duyet tat ca cac tu dc tao ra trong vector kq dua tren vector dic[] cua de bai chu ko phai duyet cac tu trong vector dic[] dua tren vector kq
	{
		for(int j=0;j<v.size();j++)
		{
			if(kq[i].compare(v[j])==0)
			{
				in.push_back(kq[i]);
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
		ac=0;	
		v.clear();
		cin>>k>>m>>n;
	v.resize(k);
	for(int i=0;i<k;i++)
	{
		cin.ignore();
		cin>>v[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			b[i][j]=true;
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{	
			in.clear();
			kq.clear();
			x[0]=a[i][j];
			Try(i,j,1);	
			check(v,kq);
			if(in.empty()!=1) 
			{
				ac=1;	
				for(int i=0;i<in.size();i++)
				{
					cout<<in[i]<<" ";
				}
			}		
		}		
	}
	if(ac==0) cout<<-1;	 	
	cout<<endl;
	}
	return 0;
}


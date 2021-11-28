/*Cach lam: Sinh to hop chap k cua n va tinh tong cua moi lan sinh neu =s thi tang bien dem+1
doc code la hieu. Luu y: de bai sai truong hop cuoi cung 0 0 0 thi ko in ra gi ca*/
#include<bits/stdc++.h>
using namespace std;
int d=0;int x[30];
struct botest
{
	int n;
	int k;
	int s;
};
int Tong(int x[],int n)
{
	int s=0;
	for(int i=1;i<=n;i++) s+=x[i];
	return s;
}
void Try(int i,botest a)
{
	for(int j=x[i-1];j<=a.n;j++)
	{
		if(j>x[i-1])
		{
			x[i]=j;
			if(i==a.k)
			{
				if(Tong(x,a.k)==a.s) d++;
			}
			else Try(i+1,a);
		}	
	}
}
int main()
{
	int dem=0;
	botest a[120];
	for(int i=0;i<120;i++)
	{
		cin>>a[i].n;
		cin>>a[i].k;
		cin>>a[i].s;
		dem++;
		if(a[i].n==0&&a[i].k==0&&a[i].s==0) break;
	}
	for(int i=0;i<dem-1;i++)
	{	
		x[0]=0;
		Try(1,a[i]);
		cout<<d<<endl;
		d=0;
	}
	return 0;
}


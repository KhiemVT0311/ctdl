#include<bits/stdc++.h>
using namespace std;
int n,p,s,dem=1;
int a[1000];
int x[1000];
int t[1000];
int  d=0;
//De su dung vector 2 chieu (vector cua vector)
//tao bien dem dau tien =0
//ta tao 1 vector roi luu nhung phan tu tren cung 1 hang vao vector nay
//cu moi lan luu xong 1 hang lai cho bien dem=dem+1
//de chuyen sang hang ke tiep
bool check(int a)
{
	if(a<=1) return false;
	if(a<=3) return true;
	if(a%2==0||a%3==0) return false;
	for(int i=5;i<=sqrt(a);i=i+6)          // phai co i=i+6, neu chi ghi i+6 -> sai
		if(a%i==0||a%(i+2)==0) return false;
	return true;
}
void Try(int i,vector<vector<int> >&v)
{
	for(int j=x[i-1];j<=dem-1;j++)
	{
		if(j>x[i-1])
		{
			if(t[i-1]<s)
			{
				x[i]=j;
			t[i]=t[i-1]+a[j];
			if(i==n)
			{
				if(t[i]==s)
				{
					vector<int>s;
					for(int i=1;i<=n;i++) s.push_back(a[x[i]]);
					v.push_back(s);
					d++;
				}
			}
			else Try(i+1,v);	
			}
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		vector<vector<int> >v;
		v.clear();
		dem=1;
		d=0;
		cin>>n>>p>>s;
//de bai: so nguyen to sau p NHUNG van tinh ca p; vi co tong =s -> duyet i<=s ( co the =s vi so nto day chinh la tong s)
		for(int i=p+1;i<=s;i++)  
		{
			if(check(i)) 
			{
				a[dem]=i;
				dem++;
			}
		}
	x[0]=0;
	t[0]=0;
	Try(1,v);
	cout<<d<<endl;
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	}
	return 0;
}


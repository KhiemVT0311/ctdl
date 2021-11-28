/*Cach lam:
Tao 1 struct congviec gom start (thoi gian bat dau) va finish (thoi gian ket thuc)
Sap xep mang congviec A[] theo thu tu tang dan cua thoi gian ket thuc
Neu 1 cong viec co thoi gian bat dau >= thoi gian ket thuc cua cong viec truoc do thi them cong viec do vao tap ket qua */
#include<bits/stdc++.h>
using namespace std;
struct congviec
{
	int start;
	int finish;
};
int sosanh(const congviec &a,const congviec &b)
{
	if(a.finish==b.finish) return a.start<b.start;
	return a.finish<b.finish;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, soluong=0;
		congviec a[1100];
		int x[1100];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i].start;
		for(int i=0;i<n;i++) cin>>a[i].finish;
		sort(a,a+n,sosanh);
		x[soluong++]=0;
		for(int i=1;i<n;i++)
		{
			if(a[x[soluong-1]].finish<=a[i].start) 
			{
				x[soluong++]=i;
			}
		}
		cout<<soluong<<endl;
	}	
	return 0;
}

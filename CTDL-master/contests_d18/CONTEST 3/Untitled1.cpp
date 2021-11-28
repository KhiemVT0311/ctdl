#include<bits/stdc++.h>
/*Cach lam:
Vi menh gia cua cac to tien trong de bai theo quy tac to phia sau thi co menh gia = x2 lan to phia truoc
-> thuat toan tham lam luon dung
Lay tien voi menh gia tu lon -> nho, tai moi gia tri thi tinh xem lay dc toi da bao nhieu to
Tinh tong tat ca cac to sau cac lan lay lai */
using namespace std;
int main()
{
	int a[]={1,2,5,10,20,50,100,200,500,1000};
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int sotien=0;
		cin>>n;
		for(int i=9;i>=0;i--)
		{
			
			if(a[i]<=n)  // **LUU Y: a[i] co the = n (lay 1 to a[i] co gia tri n)
			{
				int	x=n/a[i]; // voi gia tri a[i] thi lay dc toi da x to tien
				n-=x*a[i];	
				sotien+=x;
			}
		}
		cout<<sotien<<endl; //tong so to tien lay dc
	}
	return 0;
}


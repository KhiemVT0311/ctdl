#include<bits/stdc++.h>
/* Cach lam:
De bieu thu max=Tong(Ai*i) voi i=0 -> n-1
->Sap xep lai mang A theo thu tu tang dan ( A[i] be thi nam o  vi tri i be)
Sau do cong lai nhu binh thuong
**LUU Y: de bai yeu cau dua ra ket qua lay modulo 10^9+7 
Ta co cong thuc: (a + b)%M = ( (a % M) + (b % M) ) % M */
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+20];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long s=0;
		for(int i=0;i<n;i++)
		{
			s+=((a[i]*i)%1000000007); //ap dung cong thuc Modulo tai moi buoc cong gia tri vao tong s (ta lay du voi 10^9+7 xong moi cong vao s)
		}
		s%=1000000007;// **LUU Y: Sau khi cong tong s xong thi lai lay Modulo them lan nua (theo cong thuc)
		cout<<s<<endl;
	}
	return 0;
}


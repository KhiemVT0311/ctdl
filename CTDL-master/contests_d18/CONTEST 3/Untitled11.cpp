/*Cach lam:
Ta lam nhu cau 10 nhung **LUU Y: de bai cho N<= 2*10^6, A[i]<= 10^9
--> Bat buoc phai su dung priority_queue 
Dong thoi vi sô tao thanh quá lon nên nêu ta cu công tât ca các chi phí sau N lân nôi dây lai roi moi %M thi rât có thê trong quá trình tính vì sô quá lon nên chua tính dc dên N da bi tràn mât rôi
->Ta su dung tinh chât cua Modulo: (a + b) % M = (a % M + b % M) % M
Tong chi phi noi N day se bang: S= s1 + s2+ ..+si+... +sn ( voi si la chi phi sau 1 lan noi)
-> S % M = (s1 % M + s2 % M +..+ si % M +...+ sn % M) % M
-> Cu sau môi lân nôi dây ta lai lây tông si % M, roi thêm vao queue; dên cuôi cùng lây tông S % M */

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int n;
	long q;
	ll soi1, soi2, tong=0, s=0;
	priority_queue<ll,vector<ll>,greater<ll>>a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>q;
		a.push(q);
	}
	while(a.size()!=1)
	{	
		soi1=a.top(); a.pop();
		soi2=a.top(); a.pop();
		tong=soi1+soi2;
		tong%=1000000007;
		s+=tong;
		a.push(tong);
	}
	s%=1000000007;
	cout<<s;
	return 0;
}

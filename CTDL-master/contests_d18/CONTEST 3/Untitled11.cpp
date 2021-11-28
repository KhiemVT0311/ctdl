/*Cach lam:
Ta lam nhu cau 10 nhung **LUU Y: de bai cho N<= 2*10^6, A[i]<= 10^9
--> Bat buoc phai su dung priority_queue 
Dong thoi vi s� tao thanh qu� lon n�n n�u ta cu c�ng t�t ca c�c chi ph� sau N l�n n�i d�y lai roi moi %M thi r�t c� th� trong qu� tr�nh t�nh v� s� qu� lon n�n chua t�nh dc d�n N da bi tr�n m�t r�i
->Ta su dung tinh ch�t cua Modulo: (a + b) % M = (a % M + b % M) % M
Tong chi phi noi N day se bang: S= s1 + s2+ ..+si+... +sn ( voi si la chi phi sau 1 lan noi)
-> S % M = (s1 % M + s2 % M +..+ si % M +...+ sn % M) % M
-> Cu sau m�i l�n n�i d�y ta lai l�y t�ng si % M, roi th�m vao queue; d�n cu�i c�ng l�y t�ng S % M */

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

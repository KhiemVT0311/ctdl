/*Cach lam:
De tong chi phi noi N d�y l� nho nhat thi cu moi lan noi 2 soi day de tao thanh 1 soi ta se chon 2 soi ngan nhat trong cac soi
Vi du: cho 4 soi day 4, 3, 2, 6 , dau tien ta noi 2 day: 2 va 3 (2 day ngan nhat) -> 5 (2 + 3 = 5); ta th�m 5 v�o
Luc nay ta se con lai 3 day: 4, 5, 6 , ta lai chon 2 day ngan nhat: 4 va 5 -> 9; th�m 9 v�o
Va cuoi cung ta con lai 2 day: 9 va 6 -> 15
Sau khi noi xong 4 soi day thi ta dc 1 soi day dai 15 va mat 1 chi phi la: 5 + 9 + 15 = 29
**LUU Y: Cu sau 1 lan noi day thi se tao thanh 1 day moi nen ta lai phai sap xep lai cac soi day de lay ra 2 soi ngan nhat
--> Ta se su dung hang doi uu tien (priority_queue) de giai bai nay neu ko rat de bi TLE */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		ll soi1, soi2, tong=0, s=0;
		priority_queue<ll,vector<ll>,greater<ll> >a; //c� ph�p khai b�o h�ng doi uu ti�n voi cach sap x�p tang dan <de 2 soi ngan nhat se nam o dau cua queue>
//B�nh thuong n�u khai b�o: priority_queue<ll,vector<ll>>a th� se sap xep giam dan
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>q;
			a.push(q);
		}
		while(a.size()!=1) //khi nao trong queue chi con 1 soi day thi se dung lai
		{	
			soi1=a.top(); a.pop(); //gan gia tri a.top() cho soi day thu 1 < gia tri nam o dau queue>, sau do l�y ra khoi queue
			soi2=a.top(); a.pop();//gi� tri l�c n�y o vi tri thu 2 bay gio len vi tri dau tien, ta lai gan gia tri nay cho soi day thu 2, sau do l�y ra khoi queue
			tong=soi1+soi2;//Ta tinh tong chi phi noi 2 soi day
			s+=tong;//Cong tong vao s (s la tong chi phi noi N soi day) 
			a.push(tong);//Them soi day moi tao dc bo vao queue de ti�p tuc x�t va noi ti�p
		}
		cout<<s<<endl;
	}	
	return 0;
}


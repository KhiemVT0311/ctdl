/*C�ch l�m:
�� b�i cho s� N
- ��u ti�n ta t�m s� M = cbrt(N) . V� ta c�n t�m s� kh�i l�p phuong lon nh�t bang c�ch loai bo di c�c chu s� cua N
-> S� kh�i l�p phuong lon nh�t <= N
- Ta se sinh l�n luot c�c s� kh�i l�p phuong chay tu M (s� kh�i l�p phuong tao ra g�n voi N nh�t, x�t tu M d� tim max) cho d�n 1
Tai s� kh�i l�p phuong n�o dc tao th�nh m� ta ki�m tra th�y n� dc tao ra tu vi�c loai bo c�c chu s� cua N th� ta dung lai v� in ra s� �y
**LUU Y: D� thu�n ti�n cho vi�c so s�nh c�c chu s� cua s� kh�i l�p phuong th� ta chuy�n c�c s� li�u n�y v� dang string */
#include<bits/stdc++.h>
using namespace std;
string num2str(long long u) //h�m chuy�n tu number -> string
{
	string c;
	ostringstream num;
	num<<u;
	c=num.str();
	return c;
}
bool check(string a,string b) //h�m ki�m tra xem s� kh�i l�p phuong a c� phai dc tao ra tu vi�c loai bo c�c chu s� cua b ko
{
	/**Ta th�y v� a dc tao ra tu b: -> N�u c� b�t ky chu s� n�o trong a m� ko c� trong b ->return false
									-> Thu tu xu�t hi�n cua c�c chu s� trong a phai gi�ng b */
	
	int k=-1; // bi�n k de luu tai vi tr� n�o th� a[i] = b[j] sau d� d� dam bao thu tu xu�t hi�n cua c�c chu s� trong b gi�ng vs a th� ta lai xet ti�p tu vi tri k+1
			 // k bat d�u tu k=-1 th� khi xet vi tri tu vi tri k+1 cung dong nghia vs vi�c x�t tu k� tu b[0]
	int ok=0; // bi�n ok d� ki�m tra n�u c� b�t ky k� tu n�o c� trong a m� ko c� trong b th� return false
	for(int i=0;i<a.length();i++) //duy�t h�t c�c ky tu trong x�u ( c�c chu s� trong s� a )
	{
		ok=0; // cho ok=0 tai m�i l�n x�t 1 k� tu trong x�u a
		for(int j=k+1;j<b.length();j++) // d� trong x�u b bat dau tu vi tri j=k+1 
		{ 
			if(a[i]==b[j]) // tai vi tri n�o m� a[i]==b[j] <t�m th�y k� tu a[i] trong x�u b tai vi tri j>
			{
				k=j;ok=1; //g�n k=j , ok=1
				break; //d� t�m th�y -> ko d� nua de chuy�n sang k� tu ti�p theo trong x�u a
			}	
		}
		if(ok==0)  return false; //n�u ko t�m th�y ky tu a[i] trong x�u b -> return false
	}
	return true; //thoa m�n h�t th� return true
/* T�m lai: Dau ti�n ta se t�m xem a[0] nam o vi tr� k n�o trong x�u b -> c�c k� tu nam trc vi tr� k th� ko dc x�t nua
V� k� tu a[0] l� chu s� dau ti�n cua s� a, m� ta mu�n dam bao t�nh ch�t thu tu xuat hi�n c�c chu s� trong a phai gi�ng b th� nhung s� nam o ph�a sau cua a phai nam o ph�a sau cua b
Vi du: ta c� a=425 , b=541268
+Dau ti�n ta x�t s� 4 cua a -> nam o vi tri thu 2 cua b n�n nhung s� dang trc s� 4 trong b ko dc x�t nua (ta phai x�t ti�p tu vi tri sau s� 4 trong b tuc la vi tri thu 2+1 = 3)
+Sau d�y ta lai x�t d�n s� 2 cua a th� ta th�y s� 2 nam o vi tri thu 4 trong b -> x�t ti�p tu vi tri thu 4+1 = 5 cua b
+Cuoi cung ta x�t s� 5 trong a, th� l�c n�y trong b t�nh tu vi tr� dang x�t(vi tri s� 5 duy�t d�n h�t d�y) ko c� s� 5 n�o ca -> return false */
}
int main()
{
	int t;	
	cin>>t;
	cin.ignore();
	while(t--)
	{	
		long long u;
		cin>>u;
		cin.ignore();
		string v=num2str(u);
		string s;
		long long k;
		int ok=0; //danh d�u n�u t�m dc s� kh�i l�p phuong max th� ok=1
		int m=round(cbrt(u)); //t�m s� m l� s� lon nhat c� th� de khi m^3 th� ra dc 1 s� lon g�n = u
		for(int i=m;i>0;i--) // v� t�m s� lon nhat n�n chay tu m v� 1
		{
			k=round(pow(i,3)); //tai s� k n�o voi k= i^3 
			s=num2str(k);
			if(check(s,v)) //ta ki�m tra th�y dung 
			{
				cout<<s; //in ra, cho ok=1, k�t thuc v�ng lap lu�n
				ok=1;
				break;
			}
		}		
		if(ok==0) cout<<-1;	//neu ko t�m th�y s� n�o hop l� -> -1
		cout<<endl;
	}
	return 0;
}


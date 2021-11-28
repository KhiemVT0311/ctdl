/*C�ch l�m:
- Tao 1 x�u KQ g�m 1 d�y c�c s� 0 c� d� d�i = d� d�i cua x�u S 
<x�u KQ tuong trung cho 1 d�y c�c � tr�ng d� di�n c�c k� tu cua S v�o
sau khi di�n xong r�i ta ki�m tra n�u 2 k� tu k� nhau m� gi�ng nhau -> -1>
C�ch di�n nhu sau:
-Ta t�m s� l�n xu�t hi�n cua c�c k� tu trong x�u S:
	+Tao 1 x�u Z = S, sap x�p lai x�u Z ( nhu v�y cac k� tu gi�ng nhau se dung canh nhau, thu�n ti�n cho vi�c dem s� l�n xu�t hi�n ),
	d�ng thoi vi�c tao x�u Z de sau khi sap x�p th� S v�n ko thay d�i )
-Tao 1 c�u tr�c chucai g�m:  a: luu k� tu a trong x�u S , solan: so l�n xu�t hi�n cua k� tu a trong S
-Tao 1 vector B c� ki�u du li�u chucai d� luu c�c k�t qua tr�n
-Sap x�p lai vector B theo s� l�n xu�t hi�n cua c�c k� tu giam d�n
-Di�n luot 1:Ta rai c�c k� tu voi s� l�n xu�t hi�n tuong ung l�n luot v�o c�c vi tr� trong x�u KQ, c�c k� tu gi�ng nhau thi dc di�n c�ch nhau 1 khoang d,
di�n d�n khi nao h�t chi�u d�i cua x�u KQ th� ti�p tuc di�n luot 2 cung tuong tu nhu th�...
Q�a tr�nh dung lai khi da dien h�t c�c k� tu a trong vector B voi s� l�n xu�t hi�n tuong ung
Vdu: De b�i cho x�u S= bbbabaaacd v� D=2;
-> x�u KQ:0000000000
-> vector B: (a,4) ; (b,4) ; (c,1) ; (d,1)
-> Di�n luot 1 -> x�u KQ: a0a0a0a0b0
-> Dien luot 2 -> x�u KQ: abababacbd
-> Da di�n h�t c�c k� tu voi s� l�n xu�t hi�n tuong ung dc luu trong vector B
-Kiem tra x�u KQ thu dc: N�u co 2 k� tu gi�ng nhau m� dung canh nhau -> -1
<ko c�n phai 2 k� tu gi�ng nhau m� ko dung c�ch nhau 1 khoang D moi in ra -1 v� n�u ta rai lan luot nhu tren th� ki�u g� c�c k� tu cung dc rai h�t, m� trong qu� trinh rai thi da dam bao yeu cau c�ch nhau 1 khoang D roi 
nen neu den cuoi cung m� thu dc x�u KQ c� 2 k� tu gi�ng nhau dung canh nhau chung to di�u ki�n 2 k� tu gi�ng nhau phai c�ch nhau khoang D da ko dc thoa m�n -> Sai*/
Dau ti�n ta c� x�u KQ chua dc dien co dang   
#include<bits/stdc++.h>
using namespace std;
struct chucai
{
	char a;
	int solan;
};
int sosanh(const chucai &a,const chucai &b) //h�m so s�nh ki�u du li�u chucai dua v�o solan
{
	return a.solan>b.solan;
}
int check(string s) //h�m ki�m tra n�u 2 k� tu canh nhau m� m� gi�ng nhau -> -1
{
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1]) return -1;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int d;
		string s="";
		cin>>d;
		cin.ignore();
		cin>>s;
		string z=s; //x�u z phuc vu cho vi�c d�m s� l�n xu�t hi�n cua c�c k� tu trong s
		string kq;// x�u kq luu k�t qua	
		for(int i=0;i<s.length();i++) kq.push_back('0');// tao x�u kq g�m s.length() s� 0 de di�n
		vector<chucai>b;// vector b, luu c�c k� tu xu�t hi�n trong s v� s� l�n xu�t hi�n cua chung
		chucai u; //line 60-73: d�m s� l�n xu�t hi�n cua c�c k� tu trong s luu k�t qua v�o b
		sort(z.begin(),z.end());
		int dem=1;
		for(int i=0;i<z.length();i++)
		{
			if(z[i]==z[i+1]) dem++;
			else
			{
				u.a=z[i];
				u.solan=dem;
				b.push_back(u);
				dem=1;
			}
		}
		sort(b.begin(),b.end(),sosanh);//sap x�p lai mang b theo s� l�n xu�t hi�n
		int k=1;// d�m xem d� di�n dc bao nhi�u chucai trong vector b r�i
		for(int i=0;i<kq.length();i++)
		{
			if(k==b.size()) break; //khi n�o d� di�n h�t c�c k� tu voi s� l�n xu�t hi�n cua chung ( da dien h�t c�c chucai trong vector b) th� dung lai
			else //neu ko th� ti�p tuc di�n ti�p
			{	
				if(kq[i]=='0') //n�u kq[i]=='0' tuc l� � d� chua dc di�n, c� th� dien k� tu v�o
				{
					int j=i; // bat dau tu � thu j = i
					while(j<kq.length()) // cho bien j chay den khi nao >=kq.length() th� h�t 1 l�n di�n
					{
						if(b[k-1].solan==0) k++; //neu m� k� tu nam o b[k-1] ( vi k bat dau tu 1) da dc di�n h�t voi (solan==0) th� ta chuy�n sang k� tu ti�p theo trong vector b;
						else //neu ko
						{
							kq[j]=b[k-1].a; //di�n k� tu �y v�o � kq[j]
							b[k-1].solan--; //di�n 1 k� tu th� giam s� l�n xu�t hi�n cua k� tu �y di 1
							j+=d; //c�c k� tu c�ch nhau 1 khoang d n�n sau khi di�n xong � kq[j] ta lai ti�p tuc xet ti�p den � kq[j+d]
						}
					}
				}
			}		
		}
		cout<<check(kq)<<endl;//in k�t qua su dung h�m ki�m tra
	}
	return 0;
}


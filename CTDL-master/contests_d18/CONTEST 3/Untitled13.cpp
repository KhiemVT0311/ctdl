/*Cách làm:
- Tao 1 xâu KQ gôm 1 dãy các sô 0 có dô dài = dô dài cua xâu S 
<xâu KQ tuong trung cho 1 dãy các ô trông dê diên các ký tu cua S vào
sau khi diên xong rôi ta kiêm tra nêu 2 ký tu kê nhau mà giông nhau -> -1>
Cách diên nhu sau:
-Ta tìm sô lân xuât hiên cua các ký tu trong xâu S:
	+Tao 1 xâu Z = S, sap xêp lai xâu Z ( nhu vây cac ký tu giông nhau se dung canh nhau, thuân tiên cho viêc dem sô lân xuât hiên ),
	dông thoi viêc tao xâu Z de sau khi sap xêp thì S vân ko thay dôi )
-Tao 1 câu trúc chucai gôm:  a: luu ký tu a trong xâu S , solan: so lân xuât hiên cua ký tu a trong S
-Tao 1 vector B có kiêu du liêu chucai dê luu các kêt qua trên
-Sap xêp lai vector B theo sô lân xuât hiên cua các ký tu giam dân
-Diên luot 1:Ta rai các ký tu voi sô lân xuât hiên tuong ung lân luot vào các vi trí trong xâu KQ, các ký tu giông nhau thi dc diên cách nhau 1 khoang d,
diên dên khi nao hêt chiêu dài cua xâu KQ thì tiêp tuc diên luot 2 cung tuong tu nhu thê...
Qúa trình dung lai khi da dien hêt các ký tu a trong vector B voi sô lân xuât hiên tuong ung
Vdu: De bài cho xâu S= bbbabaaacd và D=2;
-> xâu KQ:0000000000
-> vector B: (a,4) ; (b,4) ; (c,1) ; (d,1)
-> Diên luot 1 -> xâu KQ: a0a0a0a0b0
-> Dien luot 2 -> xâu KQ: abababacbd
-> Da diên hêt các ký tu voi sô lân xuât hiên tuong ung dc luu trong vector B
-Kiem tra xâu KQ thu dc: Nêu co 2 ký tu giông nhau mà dung canh nhau -> -1
<ko cân phai 2 ký tu giông nhau mà ko dung cách nhau 1 khoang D moi in ra -1 vì nêu ta rai lan luot nhu tren thì kiêu gì các ký tu cung dc rai hêt, mà trong quá trinh rai thi da dam bao yeu cau cách nhau 1 khoang D roi 
nen neu den cuoi cung mà thu dc xâu KQ có 2 ký tu giông nhau dung canh nhau chung to diêu kiên 2 ký tu giông nhau phai cách nhau khoang D da ko dc thoa mãn -> Sai*/
Dau tiên ta có xâu KQ chua dc dien co dang   
#include<bits/stdc++.h>
using namespace std;
struct chucai
{
	char a;
	int solan;
};
int sosanh(const chucai &a,const chucai &b) //hàm so sánh kiêu du liêu chucai dua vào solan
{
	return a.solan>b.solan;
}
int check(string s) //hàm kiêm tra nêu 2 ký tu canh nhau mà mà giông nhau -> -1
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
		string z=s; //xâu z phuc vu cho viêc dêm sô lân xuât hiên cua các ký tu trong s
		string kq;// xâu kq luu kêt qua	
		for(int i=0;i<s.length();i++) kq.push_back('0');// tao xâu kq gôm s.length() sô 0 de diên
		vector<chucai>b;// vector b, luu các ký tu xuât hiên trong s và sô lân xuât hiên cua chung
		chucai u; //line 60-73: dêm sô lân xuât hiên cua các ký tu trong s luu kêt qua vào b
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
		sort(b.begin(),b.end(),sosanh);//sap xêp lai mang b theo sô lân xuât hiên
		int k=1;// dêm xem dã diên dc bao nhiêu chucai trong vector b rôi
		for(int i=0;i<kq.length();i++)
		{
			if(k==b.size()) break; //khi nào dã diên hêt các ký tu voi sô lân xuât hiên cua chung ( da dien hêt các chucai trong vector b) thì dung lai
			else //neu ko thì tiêp tuc diên tiêp
			{	
				if(kq[i]=='0') //nêu kq[i]=='0' tuc là ô dó chua dc diên, có thê dien ký tu vào
				{
					int j=i; // bat dau tu ô thu j = i
					while(j<kq.length()) // cho bien j chay den khi nao >=kq.length() thì hêt 1 lân diên
					{
						if(b[k-1].solan==0) k++; //neu mà ký tu nam o b[k-1] ( vi k bat dau tu 1) da dc diên hêt voi (solan==0) thì ta chuyên sang ký tu tiêp theo trong vector b;
						else //neu ko
						{
							kq[j]=b[k-1].a; //diên ký tu ây vào ô kq[j]
							b[k-1].solan--; //diên 1 ký tu thì giam sô lân xuât hiên cua ký tu ây di 1
							j+=d; //các ký tu cách nhau 1 khoang d nên sau khi diên xong ô kq[j] ta lai tiêp tuc xet tiêp den ô kq[j+d]
						}
					}
				}
			}		
		}
		cout<<check(kq)<<endl;//in kêt qua su dung hàm kiêm tra
	}
	return 0;
}


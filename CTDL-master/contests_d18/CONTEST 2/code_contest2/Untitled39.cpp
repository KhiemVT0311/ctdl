/*Cach lam:
Ta tao ra 1 day cac ky tu tu xau s da cho
(Tao ra day co nhieu ky tu nhat co the de khi truy xuat den gia tri tai vi tri k thi chi viec in ra luon ko can phai chay thuat toan
Neu k>vi tri cuoi cung trong day da tao o tren ta lam nhu sau:
Dau tien tao 1 mang A de luu gia tri cua cac so 2^1 -> 2^59 ( so k<= 10^18) (cu moi lan xoay xau sang phai 1 ky tu thi se dc xau moi co do dai x2 lan xau cu )
->Ta thay gia su xau s co 3 ky tu thi ky tu thu n se bang ky tu thu n-(3*2^i+1) voi i lon nhat co the sao cho n-(3*2^i+1) > 0
vi du: xau s la cow thi sinh tiep ra -> cowwco ky tu thu 6 se = ky tu thu 6-(3*2^0+1)= 2, i o day =0 la ky tu 'o'
Ta cu tru dan so k cho den khi nao vi tri k nam trong khoang cua day ta da tao ra ban dau ->in ra */  

#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{  
	int T;
	cin>>T;
	cin.ignore();
	while(T--)
	{
		string s;
		cin>>s;
		int l=s.length();// do dai xau s ban dau
		int t=22; // 22 la gia tri max co the sinh ra xau dai nhat co the 
		ull a[100];// mang a de luu cac gia tri tu 2^1 -> 2^59
		while(t--)
		{
			string x=s; // tao ra xau x = xau x de khi xoay xau x thi s ko bi thay doi
			rotate(x.begin(),x.begin()+x.length()-1,x.end()); // ham xoay xau sang ben phai 1 ky tu
			s+=x; // cong xau x vua tao ra vao s
		}
		for(int i=1;i<60;i++) a[i]=round(pow(2,i));// tao ra cac gia tri 2^1 -> 2^59 ** LUU Y khi su dung ham pow cho so ko phai kieu float thi phai them ham round de lam tron so neu ko -> sai
		ull n,m;
		cin>>n;
		m=n;// tao m = n de n ko bi thay doi gia tri
		if(n>=12582912) // Gia tri 12582912 la do dai cua xau s co the tao ra ( vi tri cuoi cung trong xau la 12582911 nen phai co dau =)
		{
			while(m>=12582912) // Tru dan den khi nao so m nam trong khoang cua xau dai nhat co the da tao ra
		{
			ull k=1;
			int h=0;
			for(int i=1;i<60;i++)
			{
				k=l*a[i]; // vi m-(l*a[i]) > 0 nen ta phai tim so a[i] lon nhat co the de tru -> h= i-1 (gia tri a[i-1] la gia tri lon nhat co the de khi thay vao pt kia thi dc ket qua > 0) 
				if(k>=m)
				{
					h=i-1; break;
				}
			}
			m-=(l*a[h]+1);
		}
		cout<<s[m-1]<<endl; // in ra ky tu tai vi tri s[m-1] vi xau s chay tu 0 den s.length()-1
		}
		else cout<<s[m-1]<<endl;
	}
	return 0;
}


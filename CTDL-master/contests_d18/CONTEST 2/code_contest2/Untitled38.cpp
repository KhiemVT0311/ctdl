/*Cach lam: 
Ta co cong thuc: Tat ca cac so deu co the dc tao ra tu cac thua so nguyen to duoi dang sau:
Goi so can do la K thi K= p1^e1*p2^e2*...*pm^em
Goi so uoc cua K la N thi N=(e1+1)*(e2+1)*...*(em+1)
voi p1,p2,p3,..pm la cac so ngto 2,3,5,7,.. ;con e1, e2, e3 la cac so mu tuong ung voi cac so p1,p2,p3,..
**LUU Y: p1,p2,p3,.. la 1 day ko giam (p1>=p2>=p3..) vi neu no la day tang thi so tao ra cang lon (2^e1 < 3^e2 < 5^e3...)
vi du: so 6=2^1*3^1 thi uoc so cua 6 se =(1+1)*(1+1)=4
Ta xem nhung so ngto nay nhu nhung chiec hop rong cu 1 cach bo e(i) do vat vao hop p(i) 
tuong ung voi 1 cach dien so mu vao cac so ngto nay thi se tao ra 1 so moi
-> sinh to hop voi 1 to hop dc sinh tuong ung voi 1 cach dat so mu vao so ngto -> tao ra 1 so moi 
Ta thay: de  bai cho N<=1000 nen chi can 10 so ngto dau tien la du de tao ra 1024 uoc so ( hop nao cung chua do vat -> (1+1)^10=1024 uoc)
Ta se tao ra so can tim N voi N= 2^e1*3^e2*5^e3*... voi so uoc (e1+1)*(e2+1)*...=K
-> Tim ra to hop voi so mu hop ly de tao thanh so nho nhat co the (ap dung nhanh can de loai bo cac TH so tao ra lon hon so can tim) */ 
#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int x[20];// mang luu cac gia tri cua to hop dc sinh tuong ung voi so mu cua cac so nguyen to 2,3,5,...
int y[20];// y[i] la so uoc dc tao ra tu so mu thu 1 den so mu thu i
int nto[20];// luu 10 so ngto dau tien
int t[20];// t[i] la tong cua so mu tu 1 den i
unsigned long long minn=ULLONG_MAX;
//Ham check so ngto 
bool check(int a)
{
	if(a<=1) return false;
	if(a<=3) return true;
	if(a%2==0||a%3==0) return false;
	for(int i=5;i<=sqrt(a);i=i+6)
		if(a%i==0||a%(i+2)==0) return false;
	return true;
}
void Try(int i,int h)
{
	for(int j=x[i-1];j>=1;j--) // e1,e2,e3,... la day ko giam 
	{
			if(y[i-1]<n)// neu so uoc dc tao ra <n thi xet tiep con ko thi co xet nua so uoc tao ra cang > hon n
		{
			x[i]=j; //luu gia tri j cua so ngto thu i trong mang
			y[i]=y[i-1]*(x[i]+1);// tinh xem den buoc thu i thi da tao dc bao nhieu uoc so
			t[i]=t[i-1]+j;//tinh xem den buoc nay da co bao nhieu so mu
			if(t[i]<60) // neu t[i]>=60 thi chac chan so can tim > 10^18 vi 2^60 > 10^18 ma tong so mu > 60 thi chac chan so do > 10^18
			{
				if(i==h)
				{
					if(y[i]==n)
					{
						unsigned long long s=1;
						for(int i=1;i<=h;i++)
						{
							s*=round(pow(nto[i],x[i])); //tao ra so s tu cac so ngto va so mu tuong ung
						}
						if(minn>s&&s>0) minn=s;
					}
				}
				else Try(i+1,h);		
			}
		}
	}	
}		
int main()
{	
//Tao ra 10 so ngto dau tien
	int j=1;
	for(int i=2;i<=30;i++)
	{
		if(check(i))
		{
			nto[j]=i;
			j++;
		}
	}
	int T;
	cin>>T;
	while(T--)
	{
		minn=ULLONG_MAX; // ULLONG_MAX: gia tri max cua kieu unsigned long long
		cin>>n;
		if(n==1) cout<<1<<endl; // *LUU Y: TH: So 1 la so nho nhat co 1 uoc so -> in ra 1 luon
		else
		{
			/* de dung N do vat thi can toi da  bao nhieu hop rong de gia tri tao ra la min
			Vi du: voi N=10 thi ta can pow(2,4)>10 -> can 4-1=3 hop vi neu hop nao cung chua do vat thi (1+1)^3=8 it nhat da =8 roi*/
			for(int i=1;i<=10;i++)
			{
				if(pow(2,i)>n)
				{
					k=i-1; break;
				}
				if(pow(2,i)==n)
				{
					k=i; break;
				}
			}
			y[0]=1;
			x[0]=59;// xet tu so mu 59 giam dan vi 2^60 > 10^18
			t[0]=0;
			for(int i=1;i<=k;i++)
			{
				Try(1,i);
			}
			cout<<minn<<endl;
		} 	
	}
	return 0;
}

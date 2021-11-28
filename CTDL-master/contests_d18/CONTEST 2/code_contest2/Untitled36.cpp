/*Cach lam: Ta thay co 9 vi tri can dien:
+ 5 o A,B,C,D,E luu gia tri cac so
+ 4 o con lai de luu phep tinh : +, -, *
-> Su dung quay lui de sinh hoan vi cho cac so va cac phep tinh*/
#include<bits/stdc++.h>
using namespace std;
int ketqua[15];
int k=0;
int Tong(int x[]) //ham tinh tong
{
	int s=0;
	s+=x[0];
	for(int i=1;i<=7;i++)
	{
		if(x[i]==1001) s+=x[i+1]; // neu gap 1001 thi +
		else if(x[i]==1002) s-=x[i+1];// gap 1002 thi -
		else if(x[i]==1003) s*=x[i+1];// gap 1003 thi *
	//Luu y: phai la else if(x[i]==1003) vi neu chi dung else -> sai (cac vi tri khac co x[i] la so chu ko phai phep toan)
	}
	return s;
}
void Try(int i,int b[],int c[],bool d[])
{
	if(i%2!=0) //Trong 9 vi tri tai cac vi tri i%2!=0 thi se chon phep toan
	{
		for(int j=0;j<3;j++) //Co 3 phep toan
		{
			ketqua[i]=c[j]; // luu cac phep toan dc chon vao mang ketqua[]
			Try(i+1,b,c,d); // xet tiep vi tri i+1, ko co dieu kien dung vi cac phep toan luon nam trong khoang tu 0->7 
		}		
	}
	else // Trong 9 vi tri tai cac vi tri i%2==0 thi se chon so
	{
		for(int j=0;j<5;j++) //Co 5 so ->Lam nhu sinh hoan vi binh thg voi 5 so A,B,C,D,E 
		{
			if(d[j]==true)
			{
				ketqua[i]=b[j];
				d[j]=false;
				if(i==8) // dieu kien dung neu i==8 (da xet den vi tri cuoi cung)
				{
					if(Tong(ketqua)==23) k=1; //Neu ket qua cua phep toan thoa man yeu cau thi ok=1
				}
				else Try(i+1,b,c,d);
				d[j]=true;	
			}
		}	
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int b[10];  //luu cac gia tri cua 5 so A,B,C,D,E
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	int	c[3]={1001,1002,1003}; // Tuong trung cho 3 phep toan: +, -, *
	bool d[5];
	for(int i=0;i<5;i++) d[i]=true;
	Try(0,b,c,d);
	if(k==0) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	k=0;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;	
int n,m;
int t[30];// Tinh xem cu 1 cach chon nhu the thi di dc bao xa
bool b[30][30];// ma tran ke;
int x[30];// luu ket qua theo thu tu di chuyen cac dinh 
int maxx=-999;
/*Ham check(b,h) neu, tren cung 1 hang h ko con o nao co gia tri =true (tu dinh h ko the di tiep dc nua) 
thi tra ve false neu ko tra ve true*/
bool check(bool b[30][30],int h)
{
	for(int j=0;j<n;j++)
	{
		if(b[h][j]==true) return false;
	}
	return true;
}
void Try(int i)
{
	for(int j=0;j<n;j++) //Duyet het tat ca cac dinh
	{
			if(b[x[i-1]][j]) //khi b[x[i-1][j]==true ( co duong di tu dinh x[i-1] den dinh j)
		{
			x[i]=j;// ghi nhan dinh j
			t[i]=t[i-1]+1;
			b[x[i-1]][j]=false;// danh dau canh ay da su dung roi ( vi b[i][j] giong b[j][i] (do thi vo huong)-> ca 2 deu =false )
			b[j][x[i-1]]=false;
			if(check(b,j)) // dk dung:check(b,j)==true ( tu dinh j ko the di tiep toi dinh nao nua)
			{
				if(t[i]>maxx) maxx=t[i];// cap nhat gia tri max 
			}
	 		else Try(i+1); //quay lui
			b[x[i-1]][j]=true;
			b[j][x[i-1]]=true;	
    	}
	}
}	
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		maxx=-999;
		cin>>n>>m;
//Khoi tao ma tran b[][],tat ca cac o co gia tri mac dinh la false
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=false;
		}
	}
//Co duong di tu dinh e->f => b[e][f]= b[f][e]= true ( duong 2 chieu)
//--> Tao ra ma tran ke
	int e,f;
	for(int i=0;i<m;i++)
	{
		cin>>e>>f;
		b[e][f]=true;
		b[f][e]=true;
	}
// Phai xet tat ca cac vi tri xuat phat tu 0->n-1 vi de bai ko cho bat dau tu 0
	for(int i=0;i<n;i++)
	{
		x[0]=i;
		t[0]=0;
		Try(1);
	}
	cout<<maxx<<endl;
	}
	return 0;
}


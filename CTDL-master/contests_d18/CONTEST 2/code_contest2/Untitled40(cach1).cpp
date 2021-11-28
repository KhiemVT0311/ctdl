//Cach lam: Cac cach di chuyen tu tp 2->n la hoan vi cua cac thanh pho tu 2->n 
#include<bits/stdc++.h>
using namespace std;
int n;
int a[30][30];// ma tran chi phi 
int x[30];// mang luu ket qua moi phan tu tuong ung voi 1 thanh pho
int t[30];// t[i] chi phi tu 1->i
bool b[30];// danh dau cac thanh pho da di qua (ko dc di lai) 
int minn=INT_MAX; // INT_MAX: gia tri max cua kieu int
void Try(int i)
{
	for(int j=2;j<=n;j++) // duyet tu thanh pho 2->n (xuat phat tu 1)
	{
		if(b[j]==true)
		{
			x[i]=j;
			t[i]=t[i-1]+a[x[i-1]][j];
			//b[j]=false               //Neu cau lenh nay nam day->sai
			if(t[i]<minn)
			{	
				b[j]=false; 
 //Bat buoc phai nam day vi sau khi thoa man 2 dk moi gan gia tri b[j]=false, va phai nam cung trong 1 dieu kien voi cau lenh b[j]=true(sau khi goi quay lui thi tra lai gia tri b[j]=true)
				if(i==n)
				{
					int s=t[i]+a[j][1];
					if(s<minn) minn=s;
				}
				else Try(i+1);
				b[j]=true;
			}	
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	for(int i=1;i<=n;i++) b[i]=true;
	x[1]=1;
	t[1]=0;	
	Try(2);
	cout<<minn<<endl;
	return 0;
}


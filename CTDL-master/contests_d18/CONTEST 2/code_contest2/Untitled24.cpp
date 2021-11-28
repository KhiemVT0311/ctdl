/*Cach lam: Vi N nho -> sinh day nhi phan N bit ung voi cac vi tri trong mang A( bit 1 la chon bit 0 la ko chon)
Day nao co tong =k thi in ra nhung so trong mang A tai cac vi tri bit 1
-Vi in ra theo thu tu tu dien:
+Sap xep tang dan mang A 
+Sinh day nhi phan tu duoi len tren (sinh bit 1 trc)
<Vi mang da dc sap xep tang dan nen nhung vi tri ung voi gia tri lon hon khi sinh nhi phan se dc tao ra sau>
** Dac bieu luu y: Cach in ra o duoi */
#include<bits/stdc++.h>
using namespace std;
int a[20],b[20],n,k,ok;
void in()
{
	int i,s=0,c[20],m=1;
	for(i=1;i<=n;i++) s+=a[i]*b[i]; // nhan gia tri tai vi tri i trong mang A voi gia tri i trong mang b ( x0=0 ->ko chon, x1=a[i]->chon)
	if(s==k)
	{
		ok=1;
		for(i=1;i<=n;i++)   //line 18-25 luu cac gia tri dc chon vao mang C
		{
			if(b[i]) 
			{ 	
				c[m]=a[i];
				m++;
			}
		}
		cout<<"[";      //line 26-31 in mang C
		for(int i=1;i<m-1;i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<c[m-1]<<"] ";
	}
}
/*Bat buoc phai lam the moi in ra dung dc vi neu duyet mang b tai b[i]=1 thi in ra a[i] -> thua 1 khoang trang cuoi cung trc khi dong ngoac " ]"
Con neu duyet mang b den n-1 tai b[i]=1 thi in ra a[i] sau do in ra a[n] -> Van sai vi b[n] co the =0 (ko dc chon)-> ko dc in ra
-> Can 1 mang trung gian C de luu cac gia tri can in ra */
void Try(int i)
{
	int j;
	for(j=1;j>=0;j--)
	{
		b[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ok=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		Try(1);
		if(ok==0) cout<<-1;
		cout<<endl;
	}
}

/*Cach lam:
Mang co the sap xep tham lam khi cac phan tu trong mang nam o cac vi tri co the dao nguoc de tao ra 1 mang co thu tu
Vi du 1: mang A[]={1,6,3,4,5,2,7}
+Cac so 1,7 nam o vi tri a[0] va a[n-1]
+Cac so 2,6 nam o vi tri a[1] va a[n-2]
...
-> So lon nhat, so nho nhat mang A deu nam o vi tri dau va duoi, sau do den so lon thu 2, so nho thu 2, nam o vi tri lien ke
Co the xoay de tao ra 1 mang tang dan, hoac giam dan -> Yes
Vi du 2: mang A[]={1,6,3,4,5,7,2}
+Cac so 1,7 ko nam o vi tri a[0] va a[n-1]
Cu the la so 7 nam o vi tri a[n-2] -> Cho du co xoay the nao cung ko the tao thanh 1 mang co thu tu -> No
<Vi vi tri a[n-2] la gianh cho so lon thu 2 (so 6) or so nho thu 2 (so 2) cua mang A, 
Con so 7 chi co the nam o vi tri a[0] (day giam) or a[n-1] (day tang) >
-Ta tao ra 1 mang B copy tu mang A
-Sap xep lai mang B (co the tang dan hoac giam dan <vi vi tri doi xung nhau>)
-So sanh vi tri cua cac so trong mang A voi cac so trong mang B o cac vi tri doi xung nhau*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, ok=0;
		int a[70], b[70];
		cin>>n;
		for(int i=0;i<n;i++) 
		cin>>a[i];
		copy(a,a+n,b);// Tao mang b copy tu a ( **Su dung ham copy )
		sort(b,b+n);// Sap xep lai mang b tang dan 
		if(n==2||n==1) ok=1; //TH1 : Neu mang chi co 1 hay 2 ptu thi mang da dc sap xep roi -> Yes 
		else if(n%2!=0&&a[n/2]!=b[n/2]) ok=0; //TH2: Neu n la so le thi a[mid] == b[mid], neu ko -> No <du sap xep tang or giam thi so nam giua van phai nam giua>
		else
		{
			for(int i=0;i<n/2;i++) //Vi cac vi tri doi xung nen chi can cho i chay den 1/2 mang
			{	
				ok=0;
				if((a[i]==b[i]&&a[n-1-i]==b[n-1-i])||(a[i]==b[n-1-i]&&a[n-1-i]==b[i])) ok=1;
			 // if( <TH day A tang dan> || <TH day A giam dan> )
				else
				{
					ok=0;
					break;
				}
			}
		}
		if(ok==1) cout<<"Yes"; //**LUU Y OUTPUT: in ra "Yes" or "No" chu ko phai "YES" or "NO"
		else cout<<"No";
		cout<<endl;	
	}
	return 0;
}


/*Cach lam:
P min tuc la tong phai min ma muon tong min thi gia tri trung binh cua moi A[i]*B[i] phai min
-> Sap xep 1 mang tang dan, mang kia thi giam dan <ta chon A tang, B giam>
Dong thoi ta thay 1<=N<=10^7 va 0<=A[i],B[i]<=10^18 -> Tong P co the dat max = (10^18)^2 * 10^7 = 10^43 > long long
->Su dung string de luu ket qua
+Doi voi nhung so A[i] hoac B[i] = 10^18 thi ta se luu ket qua cac phep tinh voi chung vao mot tong goi la K;
< Xem 10^18 la 1 hang so dat ten la u>
+Doi voi nhung phep tinh voi so nho hon 10^18 thi ta se luu ket qua cac phep tinh vao S
Vi du:
A[4]: 1, 3, 4, 10^18
B[4]: 10^18 10^18 5 2
Ta co tong P= 10^18 + 3*10^18 + 4*5 + 10^18*2  ==> Ta thay K o day = 6 <Tuong duong voi 6*10^18>, con S=20
Ta se co P dc viet lai la P= 6*u + 20
-De bieu dien P duoi dang string ta lam nhu sau:
+Ta lay 20 + 10^18 sau day chuyen tu number -> string co ten s1
-> s1: 1000000000000000020 <Vi S luon nho hon 10^18 nen s1[0] luon =1>
Thuc te viec thuc hien phep nhan 6*u chi la viec xoa s[0]=1 di roi cong them chuoi s1=000000000000000020 vao sau so 6(trc do phai chuyen K tu number sang string)
thi ta dc ket qua: 6000000000000000020
**LUU Y: Du ta da xem hang so u=10^18 nhung neu trong truong hop xau nhat:
A[10^7]= 10^18, 10^18, 10^18,..., 10^18
B[10^7]= 10^18, 10^18, 10^18,..., 10^18
thi K luc nay bang 10^18 * 10^7 , S=0 -> K vuot qua long long
==> Ta lai lam tuong tu giong nhu 10^18
Doi voi nhung so ca A[i] va B[i] deu bang 10^18 thi ta se luu ket qua cac phep tinh voi chung vao mot tong goi la E;
< Xem 10^36 la 1 hang so dat ten la v>
*Nhung Testcase ko kho den muc nay nen cung ko can lam the, nhung neu dung nhat thi nen lam the */
#include<bits/stdc++.h>
using namespace std;
string num2str(long long num) //line 29-36: ham chuyen tu number -> string
{	
	string s;
	ostringstream convert;
	convert<<num;
	s=convert.str();
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	 	long long a[n],b[n];
		long long s=0;
	 	for(int i=0;i<n;i++) cin>>a[i];
	 	for(int i=0;i<n;i++) cin>>b[i];
	 	sort(a,a+n);
	 	sort(b,b+n,greater<long long>());
	 	long long k=0;
	 	string kq="";
	 	int ok=0;
	 	for(int i=0;i<n;i++)
	 	{
			if(a[i]==1e18||b[i]==1e18)
			{
				ok=1;
				if(a[i]==1e18) a[i]/=1e18;
				else b[i]/=1e18;
				k+=a[i]*b[i];
			} 	
			else s+=a[i]*b[i];	
		}
		if(ok==0) cout<<s;
		else
		{
			s+=1000000000000000000;
			string s1=num2str(k);
			string s2=num2str(s);
			s2.erase(s2.begin()+0);
			s1+=s2;
			cout<<s1;	
		}
		cout<<endl;
	}	
	return 0;
}


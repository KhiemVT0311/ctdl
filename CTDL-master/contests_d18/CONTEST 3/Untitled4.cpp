/*Cach lam:
Luu mang A duoi dang char de tien cho viec tao so, Sap xep lai mang A tang dan, de thu dc tong min -> 2 so tao ra tu cac so trong mang A phai min
Lay xen ke cac so trong mang A vao 2 string s1, s2 (dai dien cho 2 so)
<So cang nho neu cac thanh phan tao nen no o cac hang co gia tri lon cang nho (vd: s1 (hang chuc < hang don vi) 12 < s2 (hang chuc > hang don vi) 21 )
Chuyen tu string -> number , sau do thuc hien phep cong */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char s[n+20];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n);
		string s1="",s2="";
		for(int i=0;i<n;i++)
		{ 
			if(i%2==0) s1.push_back(s[i]);
			else s2.push_back(s[i]);
		}
		long long num1=0,num2=0;
		stringstream nums1(s1); //line  29-30 ham chuyen string -> number
		nums1>>num1;
		stringstream nums2(s2);
		nums2>>num2;
		cout<<num1+num2<<endl;
	}
	return 0;
}


/* Cach lam:
Ta co 2 mang co kich co K va N-K, ta mac dinh rang K la so nho hon
Hieu giua tong 2 mang con max khi mang con co so luong phan tu N-K chua cac so lon hon mang kia (mang chua nhieu ptu + cac so trong mang lon -> tong cua mang cang lon)
-Sap xep lai mang A tang dan
-Luu cac phan tu cuoi mang (nhung phan tu lon nhat) vao mang co N-K phan tu
-Cac so con lai luu vao mang co K phan tu
-Tinh tong tung mang, thuc hien phep tru tinh ra kq */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+20], b[n], c[n]; //mang c la mang n-k phan tu, mang b la mang k ptu
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n); //sap lai mang
		if(k>n-k) k=n-k; // luon chon k la so nho hon
		int j=0;	
		for(int i=n-1;i>=k;i--) // luu n-k so cuoi cung cua mang a vao mang c
		{
			c[j]=a[i];
			j++;	
		}
		for(int i=0;i<k;i++)// luu k so dau tien vao mang b
		{
			b[i]=a[i];
		}
		long long sum1=accumulate(c,c+j,0);
		long long sum2=accumulate(b,b+k,0);
		cout<<sum1-sum2<<endl;
	}
	return 0;
}


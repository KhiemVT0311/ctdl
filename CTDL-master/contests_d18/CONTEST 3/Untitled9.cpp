/*Cach lam:
https://www.youtube.com/watch?v=pbkOS2Kd6wc&t=930s 
Y tuong nhu tren, cong viec nao co deadline lon nhat thi lay trc.
Vì voi moi deadline chi dc chon 1 cong viec nen nhung cong viec co cung deadline thi cong viec nao co profit lon hon thi lay
**LUU Y: Vi du:Công viêc có deadline=4 thì có thê hoàn thành tai thoi diem 1,2,3 <công viêc có thê dc thuc hiên xong trc deadline> */
#include<bits/stdc++.h>
using namespace std;
struct congviec   //tao struct congviec luu 3 tham so
{
	int jobid;
	int deadline;
	int profit;
};
int sosanh(const congviec &a,const congviec &b)  //line 14-18: hàm so sánh: Sap xep công viec theo profit (*LUU Y:cach su dung ham so sanh voi kieu du lieu cau truc)
{
	if(a.profit==b.profit) return a.deadline>b.deadline;// Cong viec nao co cung profit thi cai nao co deadline lon hon thi lay trc
	return a.profit>b.profit; //Neu ko thì sap xep cong viec theo profit giam dan, profit lon thì lây trc
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, soluong=0;
		long long s;
		cin>>n;
		vector<congviec>a;
		vector<congviec>b;
		congviec u;
		int ok=0;
		int x[1100], y[1100];
		int maxx=0, j=0;
		for(int i=0;i<n;i++)
		{
			cin>>u.jobid>>u.deadline>>u.profit;
			a.push_back(u);
			if(a[i].deadline>maxx) maxx=a[i].deadline; //tìm deadline lon nhât cua các công viêc
		}
		while(maxx--)
		{
			ok=0;
			b.clear();
			for(int i=0;i<a.size();i++)
			{
				if(a[i].deadline>=maxx+1)
				{
					b.push_back(a[i]);
					ok=1;
				}
			}
			if(ok==1)
			{
				sort(b.begin(),b.end(),sosanh);
				x[soluong++]=b[0].jobid;
				y[j]=b[0].profit;
				j++;
			}
			else continue;
			for(int i=0;i<a.size();i++)
			{
				if(a[i].jobid==x[soluong-1])
				{
					a.erase(a.begin()+i);
					break;
				}
			}
		}
		cout<<soluong<<" "<<accumulate(y,y+j,0)<<endl;
	}
	return 0;
}


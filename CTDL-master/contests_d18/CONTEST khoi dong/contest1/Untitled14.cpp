#include<bits/stdc++.h>
using namespace std;
struct data
{
	int so;
	int lan;
	int xuathien;
};
struct kieu
{
	int so;
	int xuathien;
};
bool sosanh(const data &p1,const data &p2)
{
	if(p1.lan==p2.lan) return p1.xuathien<p2.xuathien;
	return p1.lan>p2.lan;
}
bool sosanh1(const kieu &p1,const kieu &p2)
{
	if(p1.so==p2.so) return p1.xuathien<p2.xuathien;
	return p1.so<p2.so;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	vector<data>a;
	vector<kieu>b;
	b.resize(n);
	for(int i=0;i<n;i++)
	{
		cin>>b[i].so;
		b[i].xuathien=i;
	}
	sort(b.begin(),b.end(),sosanh1);
	int d=1;
	for(int i=1;i<b.size();i++)
	{
		if(b[i].so==b[i-1].so) d++;
		else
		{
			data p;
			p.so=b[i-1].so;
			p.lan=d;
			p.xuathien=b[i-d].xuathien;
			a.push_back(p);
			d=1;
		}
	}
	data p;
	p.so=b[n-1].so;
	p.lan=d;
	p.xuathien=b[n-d].xuathien;
	a.push_back(p);
	sort(a.begin(),a.end(),sosanh);
	for(int i=0;i<a.size();i++)
	{
		int k=a[i].lan;
		while(k--)
		{
			cout<<a[i].so<<" ";
		}
	}
	cout<<endl;
   }
return 0;
}



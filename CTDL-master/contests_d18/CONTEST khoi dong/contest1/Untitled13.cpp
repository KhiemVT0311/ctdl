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
   	return p1.xuathien<p2.xuathien;	
}
bool sosanh1(const kieu &p1,const kieu &p2)
{
	if(p1.so==p2.so) return p1.xuathien<p2.xuathien;
	return p1.so<p2.so;
}
bool check(int a)
{
	int n=a;
	while(n)
	{
		int m=n%10;
		if(m!=2&&m!=3&&m!=5&&m!=7) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	vector<data>a;
	vector<kieu>b;
	int s;
	int j=0;
	while(cin>>s)
	{
		kieu c;
		c.so=s;
		c.xuathien=j;
		b.push_back(c);
		j++;
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
	p.so=b[b.size()-1].so;
	p.lan=d;
	p.xuathien=b[b.size()-d].xuathien;
	a.push_back(p);
	sort(a.begin(),a.end(),sosanh);
	b.clear();
	for(int i=0;i<a.size();i++)
	{
		if(check(a[i].so))
		{
			kieu p;
			p.so=a[i].so;
			p.xuathien=a[i].lan;
			b.push_back(p);
		} 
	}
	for(int i=0;i<b.size();i++) cout<<b[i].so<<" "<<b[i].xuathien<<endl;
return 0;
}

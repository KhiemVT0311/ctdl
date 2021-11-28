#include <bits/stdc++.h>
struct kieu
{
	int so;
	int xuathien;
};
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
using namespace std;
int main(){
  /* string a;getline(cin,a);
   int j=0;
   vector<kieu>b;
   int n=0;
   for(int i=0;i<a.length();i++)
   {
   	 if(a[i]==' ')
		{
			kieu p;
			p.so=n;
			p.xuathien=j;
			b.push_back(p);
			j++;
			n=0;continue;
		 }
   	 else
   	 {
   	 	n*=10;
   	 	n+=a[i]-'0';
	 }
   }
   kieu p;
   p.so=n;
   p.xuathien=j;
   b.push_back(p);
  /* for(int i=0;i<b.size();i++)
   {
   	if(check(b[i].so)==0) b.erase(b.begin()+i);
   }
   for(int i=0;i<b.size();i++)
   {
   	cout<<b[i].so<<" "<<b[i].xuathien<<endl;
   }*/
   vector<int>a;
   a.resize(6);
   for(int i=0;i<a.size();i++) cin>>a[i];
   for(int i=0;i<6;i+=2)
   {
   	 a.erase(a.begin()+i);
   }
   for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
   return 0;
}
 


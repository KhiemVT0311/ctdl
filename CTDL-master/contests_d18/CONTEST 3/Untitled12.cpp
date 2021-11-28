/*Cach lam:
Day la TH dac biet cua bài toán sap dat xâu ký tu sao cho 2 ký tu giông nhau dêu co khoang cách D
sô D o day = 2 ( 2 ký tu giông nhau ko kê nhau -> 2 ký tu giông nhau cách nhau 1 khoang D=2)
=> Ta làm tuong tu bài 11, chi cân thêm cú pháp : #define d 2 */
#include<bits/stdc++.h>
#define d 2
using namespace std;
struct chucai
{
	char a;
	int solan;
};
int sosanh(const chucai &a,const chucai &b)
{
	return a.solan>b.solan;
}
int check(string s)
{
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1]) return -1;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s="";
		cin>>s;
		string z=s;
		string kq;
		vector<chucai>b;
		chucai u;
		sort(z.begin(),z.end());
		int dem=1;
		for(int i=0;i<s.length();i++) kq.push_back('0'); 
		for(int i=0;i<z.length();i++)
		{
			if(z[i]==z[i+1]) dem++;
			else
			{
				u.a=z[i];
				u.solan=dem;
				b.push_back(u);
				dem=1;
			}
		}
		sort(b.begin(),b.end(),sosanh);
		int k=1;
		for(int i=0;i<kq.length();i++)
		{
			if(k==b.size()) break;
			else
			{	
				if(kq[i]=='0')
				{
					int j=i;
					while(j<kq.length())
					{
						if(b[k-1].solan==0) k++;
						else
						{
							kq[j]=b[k-1].a;
							b[k-1].solan--;
							j+=d;
						}
					}
				}
			}		
		}
		cout<<check(kq)<<endl;
	}
	return 0;
}


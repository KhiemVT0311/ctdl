#include<bits/stdc++.h>
//th tim mai ko ra: 3 2 6 8 5 2
//th1: 3 hinh chu nhat bang nhau xep chong len nhau -> hinh vuong
// th2: 2 hinh chu nhat xep doc tren 1 hinh nam ngang
using namespace std;
int max(int a,int b)
{
	return (a<b)?b:a;
}
void swap(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
int main()
{
	int a[6];
	for(int i=0;i<6;i++) cin>>a[i];
	for(int i=0;i<=4;i+=2)
	{
		if(a[i]>a[i+1]) swap(a[i],a[i+1]);
	}
	if(a[1]==a[3]&&a[3]==a[5])
	{
			if(a[0]+a[2]+a[4]==a[1]) cout<<"YES";
			else cout<<"NO";
	} 
	else
	{
		int j;
		int canh=max(max(a[1],a[3]),a[5]);
		for(int i=0;i<6;i++)
		{
			if(a[i]==canh)
			{
				j=i;
			}
		}
		if(j!=1){
					swap(a[0],a[j-1]);
					swap(a[1],a[j]);
				}
		if(a[0]+a[4]==canh&&a[0]+a[3]==canh&&a[2]+a[5]==canh) cout<<"YES";
		else if(a[0]+a[2]==canh&&a[0]+a[5]==canh&&a[3]+a[4]==canh) cout<<"YES";
		else if(a[0]+a[2]==canh&&a[0]+a[4]==canh&&a[3]+a[5]==canh) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}

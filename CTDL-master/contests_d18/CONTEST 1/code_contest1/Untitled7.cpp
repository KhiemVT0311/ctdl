#include<bits/stdc++.h>
using namespace std;
int ok=1;
void InKq(int x[],int k)
{
	cout<<"(";
	for(int i=1;i<=k-1;i++) cout<<x[i]<<" ";
	cout<<x[k]<<")  ";
}
void Sinh(int x[],int &k)
{
	int i,j,tongcuoi,thuong,du;
	i=k;
	while(i>0&&x[i]==1) i--;
	if(i>0)
	{
		x[i]=x[i]-1;
		tongcuoi=k-i+1;
		thuong=tongcuoi/x[i];
		du=tongcuoi%x[i];
		for(j=i+1;j<=i+thuong;j++) x[j]=x[i];
		k=i+thuong;
		if(du>0)
		{
			k=k+1;
			x[k]=du;
		}
	}
	else ok=0; 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x[n];
		x[1]=n;
		int k=1;
		while(ok)
		{
			InKq(x,k);
			Sinh(x,k);
		}
		cout<<endl;
		ok=1;	
	}
	return 0;
}


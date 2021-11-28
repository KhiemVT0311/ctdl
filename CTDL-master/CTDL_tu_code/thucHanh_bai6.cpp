#include<bits/stdc++.h>
using namespace std;	
int n,m;
int t[30];
bool b[30][30];
int x[30];
int maxx=-999;
bool check(bool b[30][30],int h)
{
	for(int j=0;j<n;j++)
	{
		if(b[h][j]==true) return false;
	}
	return true;
}
void Try(int i)
{
	for(int j=0;j<n;j++) 
	{
			if(b[x[i-1]][j]) 
		{
			x[i]=j;
			t[i]=t[i-1]+1;
			b[x[i-1]][j]=false;
			b[j][x[i-1]]=false;
			if(check(b,j))
			{
				if(t[i]>maxx) maxx=t[i];
			}
	 		else Try(i+1);
			b[x[i-1]][j]=true;
			b[j][x[i-1]]=true;	
    	}
	}
}	
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		maxx=-999;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				b[i][j]=false;
			}
		}
		int e,f;
		for(int i=0;i<m;i++)
		{
			cin>>e>>f;
			b[e][f]=true;
			b[f][e]=true;
		}
		for(int i=0;i<n;i++)
		{
			x[0]=i;
			t[0]=0;
			Try(1);
		}
		cout<<maxx<<endl;
	}
	return 0;
}



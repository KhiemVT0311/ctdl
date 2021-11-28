#include<bits/stdc++.h>
using namespace std;
int check(char a[],int i,int j)
{
	int dem=0;
	
	for(int k=i+1;k<j;k++)
	{   
		int d=0;
		for(int f=i+1;f<j;f++)
		{
			if(a[k]==a[f])
			{
				if(k<=f) d++;
				else break;
			}
		}
	 if(d==1) dem++;
	}
	return dem;
}
int main()
{
	char a[52];
	int dem=0;
	cin>>a;
	for(int i=0;i<=51;i++)
	{	
		int k;
		int d=0;
		for(int j=0;j<=51;j++)
		{
			if(a[i]==a[j])
			{
				if(j>=i)
				{
				   d++;
			    	if(d==2) k=j;
				}
				else break;
			}
		}
    if(d==2)
    {
    	dem+=check(a,i,k);	
	}
	}
	cout<<dem/2<<endl;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
		int f,t=1;
		cin>>f;
		while(t<=f)
	{
		int n,l;
		cin>>l;
		int a[l][l];
		n=l;
		int m=n*n;
		int	cot=0;
		int	hang=0;
		while(m>0)
		{
			for(int j=cot;j<=n-1;j++)
			{
				int i=hang;
				a[i][j]=m;
				m--;
			}
			for(int i=hang+1;i<=n-1;i++)
			{
				int j=n-1;
				a[i][j]=m;
				m--;
			}
			for(int j=n-2;j>=cot;j--)
			{
			 	int i=n-1;
			 	a[i][j]=m;
			 	m--;
			}
			for(int i=n-2;i>=hang+1;i--)
			{
				int j=cot;
				a[i][j]=m;
				m--;
			}
			n--;cot++;hang++;
		}
		cout<<"Test "<<t<<":"<<endl;
			for(int i=0;i<l;i++)
		{
		   for(int j=0;j<l;j++)
		 {
			cout<<a[i][j]<<" ";
		 } 
		cout<<endl;
	    }
	    t++;
 	}	
	return 0;
}

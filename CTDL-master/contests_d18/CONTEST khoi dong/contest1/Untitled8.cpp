#include<bits/stdc++.h>
using namespace std;
long long fibo(int n)
{
		if (n == 0) {
			return 0;
		}
		if (n == 1) {
			return 1;
		}
		if (n >= 2) {
			long long fn, f0 = 0, f1 = 1;
			for (size_t i = 2; i <= n; i++)
			{
				fn = f0 + f1;
				f0 = f1;
				f1 = fn;
		    }
			return fn;
		}
}
int main()
{
	int f,t=1;
		cin>>f;
		while(t<=f)
	{
		int n,l;
		cin>>l;
		long long a[l][l];
		n=l;
		int m=1;
		int s=n*n;
		int	cot=0;
		int	hang=0;
		while(m<=s)
		{
			for(int j=cot;j<=n-1;j++)
			{
				int i=hang;
				a[i][j]=fibo(m);
				m++;
			}
			for(int i=hang+1;i<=n-1;i++)
			{
				int j=n-1;
				a[i][j]=fibo(m);
				m++;
			}
			for(int j=n-2;j>=cot;j--)
			{
			 	int i=n-1;
			 	a[i][j]=fibo(m);
			 	m++;
			}
			for(int i=n-2;i>=hang+1;i--)
			{
				int j=cot;
				a[i][j]=fibo(m);
				m++;
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

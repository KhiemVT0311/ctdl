#include<bits/stdc++.h>
using namespace std;
#define M 1000000007;
long long dp[1001][1001];
long long nCr(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0 || i==j)
				dp[i][j]=1;
			else dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%M;
		}
	}
}
int main(){
	int t;cin>>t;
	nCr();
	while(t--)
	{
		int n,r;
		cin>>n>>r;
		cout<<dp[n][r]<<endl;
	}
	return 0;
}

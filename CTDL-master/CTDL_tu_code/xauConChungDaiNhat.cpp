#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s,s1;cin>>s>>s1;
		int dp[s.length()+1][s1.length()+1];
		for(int i=0;i<s.length();i++){
			for(int j=0;j<s1.length();j++)
				dp[i][j]=0;
		}
		for(int i=0;i<=s.length();i++){
			for(int j=0;j<=s1.length();j++){
				if(i==0||j==0)dp[i][j]=0;
				else if(s[i-1]==s1[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
//					dp[i][j]=max(dp[i-1][j],dp[i][j-1])+1;
				}
				else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
//		for(int i=0;i<s.length();i++){
//			for(int j=0;j<s1.length();j++)
//				cout<<dp[i][j]<<" ";
//			cout<<endl;
//		}
		cout<<dp[s.length()][s1.length()]<<endl;
	}
	return 0;
}

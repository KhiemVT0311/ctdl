#include<bits/stdc++.h>
using namespace std;
int t;
bool check(char a,char b){
	return a>b?true:false;
}
string nextPermutation(string s){
	if(is_sorted(s.begin(),s.end(),check)) return "BIGGEST";
	int len=s.length(),index=len-1;
	for(int i=len-1;i>0;i--){
		if(s[i]<=s[i-1]) index=i-1;
		else break;
	}
//	cout<<"s[index]="<<s[index]<<endl;
	int indexMin=index;
	char tmp='9';
	for(int i=index;i<len;i++){
		if(s[i]<=tmp&&s[i]>s[index-1]){
			indexMin=i;
			tmp=s[i];
		}
	}
//	cout<<"s[indexMin]="<<s[indexMin]<<endl;
	swap(s[index-1],s[indexMin]);
	sort(s.begin()+index,s.end());
	return s;
}
int main(){
	cin>>t;
	while(t--){
		string test;cin>>test;
		string str;cin>>str;
		cout<<test<<" ";
		cout<<nextPermutation(str)<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int t;
string convert(int i,int j){
	string result="";
	while(i--) result+="4";
	while(j--) result+="7";
	return result;
}
string luckyNumber(int n){
//	if(n<4) return "-1";
//	if(n==4) return "4";
	// x la so cac chu so 4 toi da co the xuat hien trong xau
	// y la so cac chu so 7 ....
	int x=n/4;
	int y=n/7;
	for(int i=0;i<x+1;i++){
		for(int j=0;j<y+1;j++){
			int tmp=4*i+7*j;
			if(n==tmp) return convert(i,j);
			if(tmp>n) break;
		}
	}
	return "-1";
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<luckyNumber(n)<<endl;
	}
	return 0;
}

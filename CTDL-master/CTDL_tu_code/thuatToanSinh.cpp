#include<bits/stdc++.h>
using namespace std;
int n;
bool checkThuanNghich(string a){
	string tmp=a;
	reverse(tmp.begin(),tmp.end());
	return tmp==a?true:false;
}
string xauNhiPhan(int i){
	string tmp="";
	while(i){
		tmp+=to_string(i%2);
		i/=2;
	}
	reverse(tmp.begin(),tmp.end());
	while(tmp.length()<n) tmp="0"+tmp;
	return tmp;
}
int main(){
	cin>>n;
	string a[1<<n];
	int count=0;
	for(int i=0;i<(1<<n);i++){
		a[count++]=xauNhiPhan(i);
//		cout<<"a[count++]="<<xauNhiPhan(i)<<endl;
	}
	for(int i=0;i<count;i++){
		if(checkThuanNghich(a[i])){
			for(int j=0;j<a[i].length();j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

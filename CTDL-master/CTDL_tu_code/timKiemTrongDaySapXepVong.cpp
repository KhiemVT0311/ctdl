//#include<bits/stdc++.h>
//using namespace std;
//int t;
//int main(){
//	cin>>t;
//	while(t--){
//		int n,k;cin>>n>>k;
//		map<int,int> mp;
//		for(int i=0;i<n;i++) {
//			int tmp;cin>>tmp;
//			mp[tmp]=i+1;
//		}
//		if(mp[k]!=0) cout<<mp[k]<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int t;
//int main(){
//	int n;cin>>n;
//	unordered_map<int,int> mp;
//	for(int i=0;i<n;i++) {
//		int tmp;cin>>tmp;
//		mp[tmp]++;
//	}
//	for(auto i:mp){
//	    cout<<i.first;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct{
//	int value;
//	int count;
//} tmp;
//bool check(tmp a,tmp b){
//	return a.count>b.count;
//}
//int main(){
//	int t;cin>>t;
//	while(t--){
//		int n;cin>>n;
//		map<int,int> mp;
//		for(int i=0;i<n;i++){
//			int tmp;cin>>tmp;
//			mp[tmp]++;
//		}
//		int index=0,len=mp.size();
//		tmp a[len];
//		for(auto i:mp){
//			a[index].value=i.first;
//			a[index++].count=i.second;
//		}
//		stable_sort(a,a+index,check);
//		for(int i=0;i<index;i++){
//			for(int j=0;j<a[i].count;j++){
//				cout<<a[i].value<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		map<int,int> mp1,mp2,mp3;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			mp1[tmp]++;
		}
		for(int i=0;i<k;i++){
			int tmp;cin>>tmp;
			mp2[tmp]++;
		}
		for(auto i:mp1){
			mp3[i.first]++;
		}
		for(auto i:mp2){
			mp3[i.first]++;
		}
		for(auto i:mp3) cout<<i.first<<" ";
		cout<<endl;
		for(auto i:mp1){
			if(mp2[i.first]>0) cout<<i.first<<" ";
		}
		cout<<endl;
	}
	return 0;
}

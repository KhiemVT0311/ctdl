#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
		map<long long,int> mp1,mp2,mp3;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			mp1[tmp]++;
		}
		for(int i=0;i<m;i++){
			int tmp;cin>>tmp;
			mp2[tmp]++;
		}
		for(int i=0;i<k;i++){
			int tmp;cin>>tmp;
			mp3[tmp]++;
		}
		bool check=false;
		for(auto i: mp1){
			if(mp2[i.first]>0&&mp3[i.first]>0){
				check=true;
//				for(int j=0;j<(min(mp2[i.first],min(mp3[i.first],i.second)));j++)
				cout<<i.first<<" ";
			}
		}
		if(check==false) cout<<-1;
		cout<<endl;
	}
	return 0;
}

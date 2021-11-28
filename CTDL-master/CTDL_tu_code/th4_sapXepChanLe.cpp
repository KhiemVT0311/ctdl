#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int chan[n],le[n],demChan=0,demLe=0;
	for(int i=1;i<=n;i++){
		int tmp;cin>>tmp;
		if(i%2==0)
			chan[demChan++]=tmp;
		else le[demLe++]=tmp;
	}
	sort(chan,chan+demChan);
	sort(le,le+demLe);
	if(demLe>demChan){
		for(int i=0;i<demChan;i++){
			cout<<le[i]<<" "<<chan[demChan-i-1]<<" ";
		}
		cout<<le[demLe-1];
	}
	else{
		for(int i=0;i<demChan;i++){
			cout<<le[i]<<" "<<chan[demChan-i-1]<<" ";
		}
	}
	return 0;
}

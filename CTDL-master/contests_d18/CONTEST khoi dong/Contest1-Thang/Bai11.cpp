#include<bits/stdc++.h>
using namespace std;

void chuanHoa(char s[]){
	string kq[100];
	char *p=strtok(s," ");
	int dem=0;
	while(p!=NULL){
		p[0]=toupper(p[0]);
		for(int i=1;i<strlen(p);i++){
			p[i]=tolower(p[i]);	
		}
		kq[dem]=p;
		p=strtok(NULL," ");	
		dem++;
	}
	for(int i=1;i<kq[0].length();i++){
		kq[0][i]=toupper(kq[0][i]);
	}
	kq[dem-1]+=",";
	for(int i=1;i<dem;i++){
		cout<<kq[i]<<" ";
	}
	cout<<kq[0]<<endl;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[100];
		cin.getline(s,100);
		chuanHoa(s);
	}
	return 0;
}

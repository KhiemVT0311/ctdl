#include<bits/stdc++.h>
using namespace std;

void chuanHoa(char s[]){
	char kq[100]="";
	char *p=strtok(s," ");
	while(p!=NULL){
		p[0]=toupper(p[0]);
		for(int i=1;i<strlen(p);i++){
			p[i]=tolower(p[i]);	
		}
		strcat(kq,p);strcat(kq," ");
		p=strtok(NULL," ");	
	}
	kq[strlen(kq)-1]='\0';
	cout<<kq<<endl;
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

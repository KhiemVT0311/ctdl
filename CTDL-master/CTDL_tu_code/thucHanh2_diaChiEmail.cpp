#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[200];
	fgets(a,200,stdin);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		if(a[i]=='\n') a[i]=32;
	}
	string b[100];
	int count=0;
	char *p=strtok(a," ");
	while(p!=NULL){
		b[count++]=string(p);
		p=strtok(NULL," ");
	}
	for(int i=0;i<count-1;i++) cout<<b[i].at(0);
	cout<<b[count-1]<<"@ptit.edu.vn"<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    	int n;cin>>n;
        string tmp;
        for(int i=n;i>=1;i--) tmp+=to_string(i);
        cout<<tmp<<" ";
        while(prev_permutation(tmp.begin(),tmp.end())){
        	cout<<tmp<<" ";	
		}
        cout<<endl;
    }
    return 0;
}

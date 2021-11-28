#include<bits/stdc++.h>
using namespace std;
main(){
    int gray[100];
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        cout << s[0];
        gray[0]=s[0];
        for (int k = 1; k < s.length(); k++)
        {
            gray[k] = (s[k]-'0') ^ (s[k - 1]-'0');
            cout << gray[k];
        }
        cout <<endl;
    }

}

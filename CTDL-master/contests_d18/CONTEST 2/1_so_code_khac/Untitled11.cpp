#include<bits/stdc++.h>
using namespace std;
main(){
    int s[100];
    int test;
    cin>>test;
    while(test--){
        string gray;
        cin>>gray;
        cout << gray[0];
        s[0]=gray[0]-'0';
        for (int k = 1; k < gray.length(); k++)
        {
            s[k] = (gray[k]-'0')^s[k-1];
            cout << s[k];
        }
        cout <<endl;
    }

}

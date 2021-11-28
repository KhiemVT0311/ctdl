#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
int F[105][50005];
void tinh(){
    int i,j,k;
    for(i=1;i<10;i++) F[1][i] = 1;

    for(i=1;i<=100;i++){
        for(j=1;j<=1000;j++){
            for(k=0;k<=9;k++)
                if(k<=j)
                    F[i][j] = (F[i][j] + F[i-1][j-k])%M;
                else break;
        }
    }
}
main(){
    int t,n,k;
    tinh();
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<F[n][k]<<endl;
    }
}

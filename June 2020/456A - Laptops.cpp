#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int highQlowP=0; //,highPlowQ=0;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b>a) highQlowP++;
        
    }

    if(highQlowP>0) cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
}
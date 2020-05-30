//1358 B - CF Div 2 - 26 May 2020
//help taken from friend's solution
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;

    cin>>t;
    while(t--){
        map<int,int> m;
        int n,current;
        cin>>n;
        
        for(int i=0;i<n;i++){
            cin>>current;
            m[current]++;
        }
        int subset=0,courtyard=1;
        for(auto k: m){
            subset+=k.second;
            if(subset+courtyard-1>=k.first){
                courtyard+=subset;
                subset=0;
            }
        }
        cout<<courtyard<<endl;
        

    }
    

}
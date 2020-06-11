#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a;
            m[a]++;
        }

        map <int,int> :: iterator it;

        int unique_value=0,highest_count=0;
        for(it=m.begin();it!=m.end();it++){
            
            unique_value++;
            if(it->second>highest_count) highest_count=it->second;
        
        }

        int ans=max(min(unique_value-1,highest_count),min(unique_value,highest_count-1));
        cout<<ans<<"\n";

    }
    
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        int f=0;
        int ans=-1;

        for(int i=1;i<1024;i++){
            set<int>s2(s.begin(),s.end());
            set<int>::iterator it;
            int flag=0;
            for(int j=0;j<n;j++){
                int XorOP=(a[j]^i);
                if(s2.find(XorOP)==s2.end()){
                    flag=1;
                    break;
                }
                    
                else s2.erase(XorOP);
            }

            if(flag==0){
               // f=1;
                ans=i;
                break;
            }
            
        }

        //if(f==1) cout<<
        cout<<ans<<"\n";
    }
}
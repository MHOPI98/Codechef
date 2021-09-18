#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int d,n;
        cin>>d>>n;
        for(int i=1; i<=d; i++){
            int ans=0;
            for(int j=1; j<=n; j++){
                ans+=j;
            }
            n=ans;
        }
        cout<<n<<endl;
    }
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,countA=0, countB=0,total;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0'){
                countA++;
            }
            else{
                countB++;
            }
        }
        total=((countA*a)+(countB*b));
        cout<<total<<endl;

    }
}

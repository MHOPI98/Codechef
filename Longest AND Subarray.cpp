#include<bits/stdc++.h>
using namespace std;
int opi(int x)
{
    int ans=0;
    while(x>0)
    {
        ans++;
        x=x>>1;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans1, ans2;
        cin>>n;
        int x=opi(n);
        ans1=n-pow(2,x-1) + 1;
        ans2=pow(2,x-1)-pow(2,x-2);
        int sum=max(ans1,ans2);
        cout<<sum<<endl;

    }
}

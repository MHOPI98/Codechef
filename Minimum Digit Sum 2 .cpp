#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,d,e;
        cin>>a>>b;
        d=b*b;
        e=a+a;
       int sum=e/d;
        cout<<sum<<endl;
    }
}

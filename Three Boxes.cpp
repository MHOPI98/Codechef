#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int s=a+b+c;
        int m=a+b;
        if(s<=d)
            cout<<1<<endl;
        else if(m<=d)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
}

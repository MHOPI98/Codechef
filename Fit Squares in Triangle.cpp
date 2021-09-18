#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n/=2;
        n=(n*(n-1))/2;
        cout<<n<<endl;
    }
    return 0;
}

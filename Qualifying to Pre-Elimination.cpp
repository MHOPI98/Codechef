#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        reverse(arr, arr+n);
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>=arr[k-1])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

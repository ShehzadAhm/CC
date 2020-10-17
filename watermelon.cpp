#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;;
    cin>>t;
    cin>>n;
    int a[n];
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            
        }
    }
    return 0;
}

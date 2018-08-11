#include <iostream>

using namespace std;

int main()
{
    int t,n,k,count=0;
    cout<<"testcases: ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"no's:  ";
        cin>>n;
        int a[n];
        cout<<"treshhold: ";
        cin>>k;
        for(int j=0;j<n;j++)
        {
            cout<<"a[j]: ";
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]<=0) count++;
        }
        if(count>=k) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}

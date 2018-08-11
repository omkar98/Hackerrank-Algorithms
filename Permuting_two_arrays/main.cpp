#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int A[1000], B[1000], k;
    int flag=0,q, status[10],n;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>n>>k;
        for(int j=0;j<n;j++) cin>>A[j];
        for(int j=0;j<n;j++) cin>>B[j];
        sort(A,A+n);
        sort(B,B+n,greater<long long int>());

        for(int j=0;j<n;j++)
        {
            if(A[j]+B[j] >= k) flag=1;
            else {flag=0;break;}
        }
        status[i]=flag;
    }
    for(int i=0;i<q;i++)
    {
        if(status[i]==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}

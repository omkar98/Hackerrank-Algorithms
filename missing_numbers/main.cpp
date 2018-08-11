#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,m,count_n=0, count_m=0,freq=0;

    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>m;
    long int b[m];
    for(int i=0;i<m;i++) cin>>b[i];

    for(int i=0; i<n;i++)
    {
        count_n=0; count_m=0; freq=0;
        int k1 = a[i];
        for(int j=0;j<m;j++)
        {
            if(k1==b[j]) count_m++;
        }
        for(int k=i; k<n; k++)
        {
            if(k1==a[k])
            {
                count_n++;
                freq++;
            }
        }
        if(count_m!=count_n) cout<<k1<<" ";
        if(i!=n) i=i+freq-1;
    }
    return 0;
}

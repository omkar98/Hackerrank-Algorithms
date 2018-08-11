#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], d1,d2,i,j,d[2*n],k;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    i=1;j=1,k=0;
    d1=abs(a[i-1]-a[i]);
    d2=abs(a[i+1]-a[i]);
    while(i<n)
    {
        if(d1<d2)
        {
            d[k]=a[j-1];
            d[k+1]=a[j];
            i++;
            d2=abs(a[i+1]-a[i]);
        }
        else if(d1>d2)
        {
            j=i+1;
            d[k]=a[j-1];
            d[k+1]=a[j];
            d1=d2;
            i++;
            d2=abs(a[i+1]-a[i]);
        }
        else if(d1==d2)
        {
            if(i==1)
            {
                d[k]=a[i-1];
                d[k+1]=a[i];
            }
            j=i+1;
            k=k+2;
            d[k]=a[j-1];
            d[k+1]=a[j];
            i++;
            d1=abs(a[i-1]-a[i]);
            d2=abs(a[i+1]-a[i]);
            if(i==1) k=k+2;
        }
    }
    for(i=0;i<k+2;i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;
}

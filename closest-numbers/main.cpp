#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,diff1,diff2,i=0,j=0;
    cin>>n;
    long long int a[n],differ[2*n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        i=0;
    diff1=a[i+1] - a[i];
    diff2=a[i+2] - a[i+1];
    for(i=0;i<n;i++)
    {
        if(diff1>diff2)
        {
            i++;
            diff1=diff2;
            diff2=a[i+2] - a[i+1];
            i--;
        }
        else if(diff1<diff2)
        {
            i=i+2;
            diff2=a[i+1] - a[i];
            i=i-2;
        }
        else if(diff1==diff2)
        {
            differ[j] = a[j];
            j++;
            differ[j]= a[j+1];
            j++;
            differ[j]=a[i];
            j++;
            differ[j]=a[i+1];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        cout<<"\n"<<differ[i]<<" ";
    }
    return 0;
}

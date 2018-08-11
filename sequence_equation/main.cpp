#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int search_val(int ele, int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(ele == a[i])
            return i+1;
    }
}

int main ()
{
    int n,pos;
    cin>>n;
    int a[n],r[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int k=i;
        pos = search_val(k,a,n);
        pos = search_val(pos,a,n);
        r[i-1] = pos;
    }
    for(int i=0;i<n;i++)
    {
        cout<<r[i]<<"\n";
    }
    return 0;
}

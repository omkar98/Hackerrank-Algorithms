#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,i=0,j=0,count1=0,sum=0;
    cin>>n>>k;
    long long int prices[n],a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<=k)
        {
            prices[j]=a;
            j++;
        }
    }
    sort(prices,prices+j);
    for(i=0;i<j;i++)
    {
        sum=sum+prices[i];
        if(sum<=k) count1++;
        else break;
    }
    cout<<count1;
    return 0;
}

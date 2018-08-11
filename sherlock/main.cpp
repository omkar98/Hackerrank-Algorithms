#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    long long n,t;
    long long leftsum=0,rightsum=0;
    cin>>t;
    int res[t];
    for(int j=0; j<t; j++)
    {
        cin>>n;
        long int arr[n+2];
        arr[0]=0;arr[n+1]=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(i==1)
            {
                //leftsum = accumulate(arr,arr+i,leftsum);
                rightsum = accumulate(arr+i+1,arr+n+1,rightsum);
            }
            else
            {
                leftsum = leftsum + arr[i-1];
                rightsum = rightsum - arr[i];
            }
            if(leftsum==rightsum) break;
        }
        if(leftsum!=rightsum) res[j]=0;
        else res[j]=1;
        leftsum=0;rightsum=0;
    }

    for(int j=0; j<t; j++)
    {
        if(res[j]==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

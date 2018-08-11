#include <iostream>
//#define MAX 1000000000
using namespace std;

int main()
{
    long int n;
    int r,ans[15],t;
    long int quo,count = 0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
         quo = n;
        while(quo!=0)
        {
            r=quo%10;
            quo = quo/10;
            if(r!=0)
            {
                if(n%r==0)  count++;
            }
        }
        ans[i]=count;
                cout<<ans[i]<<"\n";
        count =0;
    }
    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int count = 1,count_all[n],k;
    for(int i=0;i<n;i++)
    {
        k=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(abs(k-a[j])<=1)
            {
                count++;
            }
        }
        count_all[i]=count;
        count = 1;
    }

    int* i1;
    i1 = max_element(count_all, count_all + n);
    cout << (*i1) << "\n";

}

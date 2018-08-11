#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct order
{
    long int no;
    long int id;
    long int prep;
    long int serve;
};
struct order orders[1000];

bool arg31(order a, order b)
{
    if (a.serve != b.serve)
        return a.serve<b.serve;
    if (a.no != b.no)
            return a.no < b.no;
}

int main()
{
    long int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        orders[i].no=i+1;
        cin>>orders[i].id>>orders[i].prep;
        orders[i].serve=orders[i].id+orders[i].prep;
    }
    sort(orders,orders+n,arg31);
    /*int ending=0,start=0;
    for(int i=0;i<n;i++)
    {
        if(orders[i].serve==orders[i+1].serve)
        {
            start=i;
            ending++;
        }
    }
    sort(orders+start,orders+ending+1,orders.id);*/
    for(int i=0;i<n;i++)
    {
        cout<<orders[i].no<<" ";
    }
    return 0;
}

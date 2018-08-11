#include <bits/stdc++.h>
//Input: 0 0 1 2 2 2 3 5 9 9 9 9
// 0 2 2 2 2 2 3 5 9 9 9 9
using namespace std;
int month();
int date();
int minutes();
int seconds();
void store(int);
int loops(int, int);
int arr[10],res[8],k=0;

int loops(int start, int end)
{
    int flag=0;
    for(int i=start;i>=end;i--)
    {
        if(arr[i]!=0)
        {
            store(i);flag=1;return flag;
        }
    }
    return flag;
}

void store(int value)
{
    res[k] = value;
    k++;
    arr[value]--;
}

int month()
{
    int flag=0;
    if(arr[1]!=0)
    {
        store(1);
        flag=loops(2,0);
        if(flag==0) return flag;
    }
    else if(arr[0]!=0)
    {
        store(0);
        flag=loops(9,1);
        if(flag==0) return flag;
    }
    else return flag;
}

int date()
{
    int flag=0;
    if(res[0]==0 && res[1]==2)
    {
        flag=loops(2,0);
        if(flag==0) return 0;
        if(res[2]==2)
        {
            flag=loops(8,0);
            if(flag==0)
            {
                k--;arr[arr[k]]++;
                flag=loops(1,0);
                if(flag==0) return 0;
                else
                {
                    flag=loops(9,0);
                    if(flag==0) return 0;
                }
            }
        }
        else
        {

                    flag=loops(9,0);
                    if(flag==0) return 0;
        }
    }
//31 days
    else if((res[1]%2==1&&res[0]==0&&res[1]<9) || res[1]==8 || (res[0]==1&&res[1]%2==0))
    {
        flag=loops(3,0);
        if(flag==0) return 0;
        if(res[2]==3)
        {
         flag=loops(1,0);
         if(flag==1) return flag;
         if(flag==0)
         {
            k--;arr[arr[k]]++;
            flag=loops(2,0);
                if(flag==0) return 0;
                else
                {
                    flag=loops(9,0);
                    if(flag==0) return 0;
                }
         }
        }
        flag=loops(9,0);
       if(flag==0) return 0;
    }
    else
    {
        flag=loops(3,0);
        if(flag==0) return 0;
        if(res[2]==3)
        {
         flag=loops(0,0);
         if(flag==1) return flag;
         if(flag==0)
         {
                k--;arr[arr[k]]++;
                flag=loops(2,0);
                if(flag==0) return 0;
                else
                {
                    flag=loops(9,0);
                    if(flag==0) return 0;
                }
         }
        }
        flag=loops(9,0);
       if(flag==0) return 0;
    }
}

int minutes()
{
        int flag=loops(2,0);
        if(flag==0) return 0;
        if(res[4]==2)
        {
         flag=loops(3,0);
         return flag;
        }
        flag=loops(9,0);
       if(flag==0) return 0;
}

int seconds()
{
    int flag=0;
    flag=loops(5,0);
        if(flag==0) return 0;
        flag=loops(9,0);
        return flag;

}

int main()
{
    int i=0,j=0,k=0,flag=0;
    for(i=0;i<12;i++)
    {
        int value=0;
        cin>>value;
        arr[value] = arr[value]+1;
    }
    flag=month();
    if(flag==0)
    {
        cout<<flag<<" ";
        return 0;
    }
    flag=date();
    if(flag==0)
    {
        cout<<flag<<" ";
        return 0;
    }
    flag=minutes();
    if(flag==0)
    {
        cout<<flag<<" ";
        return 0;
    }
    flag=seconds();
    for(i=0;i<8;i++)
    {
        cout<<res[i];
        if(i==1) cout<<"/";
        if(i==3) cout<<" ";
        if(i==5) cout<<":";
    }
    return 0;
}

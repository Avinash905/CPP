#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int k=i;
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }

        for(;j<=n;j++)
        {
            cout<<k;
            k--;
        }
        for(;j<(n+i);j++)
        {
            k++;
            cout<<k+1;
        }
        cout<<endl;
    }
    return 0;
}
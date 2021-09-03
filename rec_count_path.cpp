#include<iostream>
#include<string>
using namespace std;

int count(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int num=0;
    for(int i=1;i<=6;i++)
    {
        num+=count(s+i,e);
    }
    return num;
}

int main()
{
    cout<<count(0,3);
    return 0;
}
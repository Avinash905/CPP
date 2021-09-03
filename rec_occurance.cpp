#include<iostream>
using namespace std;

int first(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }

    if(arr[i]==key)
    {
        return i;
    }

    return first(arr,n,i+1,key);
}

int last(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }

    int rest=last(arr,n,i+1,key);
    if(rest!=-1)
    {
        return rest;
    }

    if(arr[i]==key)
    {
        return i;
    }

    return -1;
}

int main()
{
    int n=6;
    int arr[]={1,2,4,3,2,5};
    cout<<first(arr,n,0,2)<<endl;
    cout<<last(arr,n,0,2);
    return 0;
}
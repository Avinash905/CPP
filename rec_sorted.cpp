#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    return (arr[0]<arr[1] && sorted(arr+1,n-1));
}

int main()
{
    int n=6;
    int arr[]={2,4,6,5,8,9};
    cout<<sorted(arr,n);
    return 0;
}
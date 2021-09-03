#include<iostream>
using namespace std;

int dec(int n)
{
    if(n==1)
    {
        return 1;
    }
    cout<<n<<endl;
    return dec(n-1);
}

void inc(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    cout<<dec(n)<<endl;
    inc(n);
    return 0;
}
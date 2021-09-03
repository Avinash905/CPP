#include<iostream>
using namespace std;

void towerofhanoi(int n,char source,char aux,char dest)
{
    if(n==0)
    {
        return;
    }

    towerofhanoi(n-1,source,dest,aux);
    cout<<"Move from "<<source<<" to "<<dest<<endl;
    towerofhanoi(n-1,aux,source,dest);
}

int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="aassshhhaahh";
    char ans[100];
    ans[0]=s[0];
    int count=0;
   
    for(int i=0;i<s.size();i++)
    {
        if(s[i+1]!=s[i])
        {
            ans[count]=s[i];
            count++;
        }
        else
        {
            continue;
        }
    }
    cout<<ans;
    return 0;
}
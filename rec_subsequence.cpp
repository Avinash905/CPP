#include<iostream>
#include<string>
using namespace std;

void subsec(string s,string ans="")
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subsec(ros,ans);
    subsec(ros,ans+ch);
}

int main()
{
    subsec("ABC","");
    cout<<endl;
    return 0;
}
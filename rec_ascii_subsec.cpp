#include<iostream>
#include<string>
using namespace std;

void asciisub(string s,string ans="")
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    asciisub(ros,ans);
    asciisub(ros,ans+ch);
    asciisub(ros,ans+to_string(code));
}

int main()
{
    asciisub("AB","");
    return 0;
}
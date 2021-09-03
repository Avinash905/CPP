#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s="sjdhghd";
    
    for(int i=0;i<s.size();i++)
    {
        s[i]=toupper(s[i]);
    }

    cout<<s;
    return 0;
}

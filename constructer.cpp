#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    int age;
    bool gender;

    student()
    {
        cout<<"Default constructer"<<endl;
    }

    student(string s,int a,int g)
    {
        cout<<"parameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }

    student(student &a)
    {
        cout<<"copy constructer"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student()
    {
        cout<<"Destructor"<<endl;
    }

    void printInfo()
    {
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
    }

    bool operator==(student &a)
    {
        if(name==a.name && age==a.age &&gender==a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    student a("Avi",20,1);
    //a.printInfo();
    student b;
    student c=a;//copy constructer

    //operator overloading
    if(c==a)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not same"<<endl;
    }

    return 0;
}

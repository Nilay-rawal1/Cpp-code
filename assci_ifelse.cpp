#include <iostream>
using namespace std;

int main()
{
    
    char a;
    cout << "the enter the charcter:";
    cin >> a;
    int(b)= int(a);
    if (b>=65 && b<=90)
    {
        cout<<a<<" is a uppercase"<<endl;
    }
    else if (b>=48 && b<=57)
    {
        cout<<a<<" is a numeric"<<endl;
    }
    else if (b>=97 && b<=122)
    {
        cout<<a<<" is a lowercase"<<endl;
    }
    else
    {
        cout<<a<<" is special charcter"<<endl;
    }
    

    return 0;
}
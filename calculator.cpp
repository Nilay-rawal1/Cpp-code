#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "enter the value of a=";
    cin >> a;
    cout << "enter the value of b=";
    cin >> b;
    char op;
    cout << "enter the operations =";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "the ans is " << a + b << endl;
        break;
    case '-':
        cout << "the ans is " << a -b << endl;
        break;
    case '/':
        cout << "the ans is " << a / b << endl;
        break;
    case '*': 
        cout << "the ans is " << a * b << endl;
        break;
    

    default:
        cout << "invalid operation" << endl;
        break;
    }

    return 0;
}
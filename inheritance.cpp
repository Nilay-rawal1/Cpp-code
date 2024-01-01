#include <bits/stdc++.h>
using namespace std;
// inheritance
// parent class
class Human /* super class or base class or parent*/
{
    /*private can't be accessiable in child or sub class*/
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};
// children class;
// syntax -> class +{name} + access_modifer + parent name
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "male sleeping" << endl;
    }
};

int main()
{
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;


    cout<<object1.color<<endl;
    object1.setWeight(85);
    cout<<object1.weight<<endl;
    object1.sleep();
    return 0;
}
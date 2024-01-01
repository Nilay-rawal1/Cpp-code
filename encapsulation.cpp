#include<iostream>
using namespace std;

class student {

    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age; //-> pointer
    }
};

int main(){


    student first;
    cout<<"test passed";
    return 0;
}

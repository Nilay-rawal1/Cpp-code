#include <iostream>
using namespace std;
/*function overloading  { 
    polymroph ->  Compile time  -> function overloading 
                                -> operator overloading 
              
              ->  Run time (dynamic)-> method orveriding
                                    -> 

}*/

class Animal {
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};


int main(){
    Dog obj;
    obj.speak();



    return 0;
}
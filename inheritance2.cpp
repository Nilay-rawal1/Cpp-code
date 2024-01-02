#include<bits/stdc++.h>
using namespace std;
/*ambugutiy of Inheritance by using scope :: */

class A{
    public:
    void func(){
        cout<<"I am A class"<<endl;
    }
         
};
class B {
    public:
    void func(){
        cout<<"I'm B class"<<endl;
    }
};
class C: public A,public B{

};


int main(){
    
    C obj;
    obj.A::func(); 
    obj.B::func();



    return 0;
}
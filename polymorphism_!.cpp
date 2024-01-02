#include<bits/stdc++.h>
using namespace std;
/*function overloading  { 
    polymroph ->  Compile time  -> function overloading 
                                -> operator overloading 
              ->  Run time  ->    
}*/
 /* function overloading expand it
 class A{
    public:
    void sayHello(){
        cout<<"Hello nilay !";
    }
    void sayHello(string name){
        cout<<"Hello "<<name;
    }

};*/

class B{
    public:
    int b;
    int a;
    
    public:
    int add(){
        return a+b;
    }

    //syntax for operator overloading
    void operator+ (B &obj){
        int value=this ->a;
        int val=obj.a;
            cout<<"output : "<<val-value<<endl;
    }

    void operator() (){
        cout<<"main hoon :"<<this->a <<" numbari";
    }
};







int  main(){
    B obj1,obj2;
    obj1.a=10;
    obj2.a=7;

    obj1+obj2;
    obj1();
    return 0;
}
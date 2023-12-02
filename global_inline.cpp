#include<iostream>
using namespace std;

/*tersary operator
    condition ? result(true): result(false)
    */
inline int getmax(int& a,int& b){
//using inline  this chunk of code will get replaced by  code where it is called
/*no function overloading
no access memory usage*/
    return(a>b)?a:b;
}



int main(){
    int a=2,b=4;
    int ans=0;

    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+4;
    b+=1;
  ans=getmax(a,b);
    cout<<ans;
    return 0;
}


//int score =15 {global variable}
//can be update anytime by any func or class

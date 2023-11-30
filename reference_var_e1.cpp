#include<bits/stdc++.h>
using namespace std;

void update(int a ){
    a++;
}
//pass by refernence 
/*same memory but different names


int& update()
-> bad practice ,koi change karde toh
*/



int main(){

    /*int i=5;
    //create a ref variable int& j=i
    int& j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;*/

int n=5;
cout<<"before "<<n<<endl;
update(n);
cout<<"after "<<n;





    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    /* p=p+1;
      cout<<"inside value :"<<p<<endl;*/
    *p = *p + 1;
}
//arr[]=*arr, array will pass as pointer only , but it can be declered in any way

int getsum(int *arr,int n) {
    cout<<endl<<"size : "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}
/* benifits ->
                we can send part of array using this */
    
 int   main()
{

    /*int value = 5;
    int *p = &value;

    cout << "before > " << *p << endl;
    update(p);
    cout << "after > " << *p << endl;*/

    int arr[6] = {1,2,3,4,5,8};
    cout << "sum is (sum)=> " << getsum(arr+3,3) << endl;

    return 0;
}
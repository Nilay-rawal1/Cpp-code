#include <iostream>
#include <set>
using namespace std;
// set store only unique elements
//  return values in sorted order
//  unordered set is faster n random order

int main()
{

    set<int> s;

    s.insert(5); // O(logn) time complexicty
    s.insert(2);
    s.insert(1);
    s.insert(6);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    cout<<"is element present ->"<<s.count(5);

    return 0;
}
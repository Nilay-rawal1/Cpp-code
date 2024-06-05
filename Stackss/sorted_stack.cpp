#include <bits/stdc++.h> 
using namespace std;
void sortedInsert(stack<int> &s,int num){
	//base case
	if(s.empty() || (!s.empty()&& s.top() <num)){
		s.push(num);
		return ;
	}
	int n=s.top();
	s.pop();
	sortedInsert(s, num);
	s.push(n);
}

void sortStack(stack<int> &stack)
{
	// base case
	if(stack.empty()){
		return ;
	}
	int num=stack.top();
	stack.pop();
	//recursive call
	sortStack(stack);
	sortedInsert(stack,num);
}
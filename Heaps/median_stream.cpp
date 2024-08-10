#include <bits/stdc++.h>
using namespace std;
int signum(int a,int b){
	if(a==b)
	return 0;
	else if (a>b)
	return 1;
	else
	return -1;
}


void callMedian(int element, priority_queue<int>& maxi,
                priority_queue<int, vector<int>, greater<int>>& mini, int& median) {
    
    if (maxi.size() > mini.size()) {
        if (element < median) {
            mini.push(maxi.top());
            maxi.pop();
            maxi.push(element);
        } else {
            mini.push(element);
        }
        median = (maxi.top() + mini.top()) / 2;
    } 
    else if (maxi.size() < mini.size()) {
        if (element > median) {
            maxi.push(mini.top());
            mini.pop();
            mini.push(element);
        } else {
            maxi.push(element);
        }
        median = (maxi.top() + mini.top()) / 2;
    } 
    else {
        if (element < median) {
            maxi.push(element);
            median = maxi.top();
        } else {
            mini.push(element);
            median = mini.top();
        }
    }
}

vector<int> findMedian(vector<int> &arr, int n){
	
	vector<int>ans;
	priority_queue<int>maxheap;
	priority_queue<int,vector<int>,greater<int> >minheap;
	int median=0;


	for(int i=0;i<n;i++){
		callMedian(arr[i],maxheap,minheap,median);
		ans.push_back(median);

	} 
	return ans;
}


int main(){


    return 0;
}
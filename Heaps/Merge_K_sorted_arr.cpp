#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int data;
    int i;
    int j;
    Node(int data  , int row,int col){
       this->data=data;
        i=row;
        j=col;
    }


};

class compare{
    public:
    bool operator()(Node* a,Node*b){
        return a->data>b->data;
    }
}
;
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<Node*,vector<Node*>,compare>minheap;

    //step1:sarre arrays k first element insert 
    for(int i=0;i<k;i++){
        Node*temp=new Node(kArrays[i][0],i,0);
        minheap.push(temp);
    }
    vector<int>ans;

    //step2:
    while(minheap.size()>0){
        Node* tmp=minheap.top();
        ans.push_back(tmp->data); 
        minheap.pop();
        int i=tmp->i;
        int j=tmp->j;

        if(j+1<kArrays[i].size()){
            Node* next=new Node(kArrays[i][j+1],i,j+1);
            minheap.push(next);


        }

    }
    return ans;
    
}

int main(){
    return 0;
    
}
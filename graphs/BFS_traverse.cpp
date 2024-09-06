#include<bits/stdc++.h>
using namespace std;


void prepareAdjList( unordered_map<int,list<int>>&adjlist,vector<pair<int,int>> &edges){
    for (int i = 0; i < edges.size(); i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);

    }
    



}

void bfs( unordered_map<int,list<int>>&adjlist, unordered_map<int,bool>&visited,
           vector<int>&ans,int node){

            queue<int>q;
            q.push(node);
            visited[node]=1;

            while(q.empty()){
                    int frontnode=q.front();
                    q.pop();

                    //store front node

                    ans.push_back(frontnode);
                    //traverse all nodes
                    for(auto i:adjlist[frontnode]){
                        if(!visited[i]){
                            q.push(i);
                            visited[i]=1;
                        }
                    }
            }


}







vector<int>BFS(int vertex,vector<pair<int,int>> edges){
    unordered_map<int,list<int>>adjlist;

    vector<int>ans;
    unordered_map<int,bool>visited;

    prepareAdjList(adjlist,edges);
    //check and traverse all compoments of a graph

    for(int i=0;i<vertex;i++){
            if(!visited[i]){
                bfs(adjlist,visited,ans,i);
            }
    }

}
















int main(){




    return 0;
}
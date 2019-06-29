
#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int>* adj;
    public:
    Graph(int V);
    void addEdge(int src, int dest);
    void BFS(int src);
};
Graph::Graph(int V){
    
    this->V = V;
    adj = new list<int> [V]; //2 dimensional
    
    
}
void Graph:: addEdge(int src, int dest){
    adj[src].push_back(dest);
    //adj[dest].push_back(src);
}
void Graph:: BFS(int s){
    bool visited[V] = {false};
    list<int> q; //maintaining a list of nodes from which source will be popped from time to time
    q.push_back(s);
    visited[s] = true;
    while(!q.empty()){
        s = q.front();
        cout<<s<<endl;
        q.pop_front();
        
        for(auto x: adj[s]){
            if (!visited[x]){
                visited[x] = true;
                q.push_back(x);
            }
        }
    }
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V,E,a,b;
    cout<<"enter the number of Vertices"<<endl;
    cin>>V;
    cout<<"enter the number of Edges"<<endl;
    cin>>E;
    Graph graph(V);
    for(int i =0;i<E;i++){
      cin>>a>>b;
      graph.addEdge(a,b);
    }
    cout<<"enter source for BFS"<<endl;
    cin>>a;
    graph.BFS(2);
        return 0;
}

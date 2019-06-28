#include<bits/stdc++.h>
using namespace std;
struct Graph{
    int V;
    set<int>* adj;
};
Graph* createGraph(int V){
    Graph* graph = new Graph;
    graph->V = V;
    graph->adj = new set<int> [V]; //2 dimensional
    return graph;
    
}
void addEdge(Graph* graph, int src, int dest){
    graph->adj[src].insert(dest);
    graph->adj[dest].insert(src);
}
void printGraph(Graph* graph){
    for(int i=0;i < graph->V;i++){
        set<int> list = graph->adj[i];
        cout<<" adj of "<<i<<": ";
        for(auto x : list){cout<<x<<" ";}
        cout<<endl;
    }
}
void searchEdge(Graph* graph, int src, int dest) 
{ 
	auto itr = graph->adj[src].find(dest); 
	if (itr == graph->adj[src].end()) 
		cout << endl << "Edge from " << src 
			<< " to " << dest << " not found."
			<< endl; 
	else
		cout << endl << "Edge from " << src 
			<< " to " << dest << " found."
			<< endl; 
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V,E,a,b;
    cout<<"enter the number of Vertices"<<endl;
    cin>>V;
    cout<<"enter the number of Edges"<<endl;
    cin>>E;
    Graph* graph = createGraph(V);
    for(int i =0;i<E;i++){
      cin>>a>>b;
      addEdge(graph,a,b);
    }
    cout<<"enter source and destination for the edge to be searched"<<endl;
    cin>>a>>b;
    searchEdge(graph,a,b);
    printGraph(graph);
        return 0;
}


#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    set<int>* adj;
    public:
    Graph(int V);
    void addEdge(int src, int dest);
    void printGraph();
    void searchEdge(int src, int dest);
};
Graph::Graph(int V){
    
    this->V = V;
    adj = new set<int> [V]; //2 dimensional
    
    
}
void Graph:: addEdge(int src, int dest){
    adj[src].insert(dest);
    adj[dest].insert(src);
}
void Graph::printGraph(){
    for(int i=0;i < V;i++){
        set<int> list = adj[i];
        cout<<" adj of "<<i<<": ";
        for(auto x : list){cout<<x<<" ";}
        cout<<endl;
    }
}
void Graph::searchEdge(int src, int dest) 
{ 
	auto itr = adj[src].find(dest); 
	if (itr == adj[src].end()) 
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
    Graph graph(V);
    for(int i =0;i<E;i++){
      cin>>a>>b;
      graph.addEdge(a,b);
    }
    cout<<"enter source and destination for the edge to be searched"<<endl;
    cin>>a>>b;
    graph.searchEdge(a,b);
    graph.printGraph();
        return 0;
}

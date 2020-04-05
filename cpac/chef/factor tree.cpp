#include<iostream> 
#include <list> 
using namespace std; 

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int cost[100000];
int quo=1;
class Graph 
{ 
	int V; 
	list<int> *adj;
	int printAllPathsUtil(int , int , bool [], int [], int &); 
public: 
	Graph(int V); 
	void addEdge(int u, int v); 
	int printAllPaths(int s, int d); 
}; 

int divisors(int n) 
{
	int c=1;
	for (int i=1;i<=n/2+1;i++) 
		if (n%i==0) 
			c++;
	return c;
}

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int u, int v) 
{ 
	adj[u].push_back(v);
} 

int Graph::printAllPaths(int s, int d) 
{ 
	bool *visited = new bool[V]; 

	int *path = new int[V]; 
	int path_index = 0;
	for (int i = 0; i < V; i++) 
		visited[i] = false; 

	return printAllPathsUtil(s, d, visited, path, path_index); 
} 
int Graph::printAllPathsUtil(int u, int d, bool visited[], int path[], int &path_index) 
{
	visited[u] = true; 
	path[path_index] = u; 
	path_index++; 

	if (u == d)
		for (int i = 0; i<path_index; i++) 
			quo*=cost[path[i]];
	else
	{
		list<int>::iterator i; 
		for (i = adj[u].begin(); i != adj[u].end(); ++i) 
			if (!visited[*i]) 
				printAllPathsUtil(*i, d, visited, path, path_index); 
	} 

	path_index--; 
	visited[u] = false;
	return quo;
} 

int main() 
{
	int t,n,u,q,v,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		Graph g(n+1);
		for(int i=1;i<n;i++)
		{
			cin>>u>>v;
			g.addEdge(u,v);
		}
		for(int i=1;i<=n;i++)
			cin>>cost[i];
		cin>>q;
		while(q--)
		{
			cin>>u>>v;
			cout<<divisors(g.printAllPaths(u,v)%1000000007)<<endl;
			quo=1;
		}
	}
	return 0; 
}
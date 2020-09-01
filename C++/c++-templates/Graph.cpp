#include<iostream>
#include<vector>
#include<exception>
using namespace std;

typedef struct edge {
	int adjvex;
	int weight;
	struct edge* next;
}edge;
typedef struct vertex {
	edge* adjedge;
	int degOut;
	int degIn;
}vertex;

class Graph {
public:
	Graph(int n, int m);
	Graph(string fileName);
	Graph(): Graph(0,0) {}
	
	int numberOfVertices() { return n; }
	int numberOfEdges() { return m; }
	double freemanNetworkCentrality();
	double closenessCentrality();

	string shortestPath(int u, int v, string algorithm);
	void DFS(int u, int v);
	void BFS(int u, int v);
	void Dijkstra(int u, int v);

private:
	int n, m;
	vector<int> visited;
	vector<int> pred;
	vector<vertex> vertices;
};
Graph(int n, int m) : n(n), m(m), visited(n, 0), pred(n, 0), vertices(n, { NULL, 0, 0 }) {   // visited和pred能这样么？？？
	// 不能就resize (memset)  // resize不能用于重新初始化，只能初始化扩大的部分，不会初始化已存在的元素
	// vertices.resize(n, {NULL, 0, 0});
}
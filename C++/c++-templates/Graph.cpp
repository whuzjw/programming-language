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
Graph(int n, int m) : n(n), m(m), visited(n, 0), pred(n, 0), vertices(n, { NULL, 0, 0 }) {   // visited��pred������ô������
	// ���ܾ�resize (memset)  // resize�����������³�ʼ����ֻ�ܳ�ʼ������Ĳ��֣������ʼ���Ѵ��ڵ�Ԫ��
	// vertices.resize(n, {NULL, 0, 0});
}
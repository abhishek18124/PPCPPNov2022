/*

Implementation of the weighted graph using edge list.

Note : each vertex in the graph is generic.

*/

#include<iostream>
#include<vector>
#include<set>

using namespace std;

template <typename T>
class edge {
	public :

		T u;
		T v;
		int w;

		edge(T u, T v, int w) {
			this->u = u;
			this->v = v;
			this->w = w;
		}
};

template <typename T>
class graph {

	set<T>  vertexSet;        // to store the graph representation
	vector<edge<T>> edgeList; // to store the graph representation
	bool  isDirected;

	public :

		graph(bool isDirected) {
			this->isDirected = isDirected;
		}

		void addEdge(T u, T v, int w) {
			// add an edge of weight 'w' b/w 'u' and 'v' 
			edgeList.push_back(edge<T>(u, v, w));

			if(!isDirected) {
				edgeList.push_back(edge<T>(v, u, w));
			}
			
			vertexSet.insert(u);
			vertexSet.insert(v);
		}

		void print() {
			for(edge<T> edge : edgeList) {
				cout << edge.u << "->" << edge.v << " : " << edge.w << endl;
			}
		}
};


int main() {

	graph<char> g(false);

	g.addEdge('A', 'B', 7);
	g.addEdge('A', 'C', 1);
	g.addEdge('B', 'D', 2);
	g.addEdge('C', 'D', 9);
	g.addEdge('C', 'E', 6);
	g.addEdge('D', 'E', 5);

	g.print();

	return 0;
}
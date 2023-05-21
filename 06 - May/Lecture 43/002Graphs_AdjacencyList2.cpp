/*

Implementation of the graph using adjacency list.

Note : each vertex in the graph is generic.

*/

#include<iostream>
#include<map>
#include<list>

using namespace std;

template <typename T>
class graph {

	map<T, list<T>> neighbourMap; // to store the graph representation
	bool isDirected; // to indicate if the graph is directed or not

	public :

		graph(bool isDirected=false) {
			this->isDirected = isDirected;
		}

		void addEdge(T u, T v) {

			// adds an edge b/w vertex u and v

			neighbourMap[u].push_back(v);
			if(!isDirected) {
				neighbourMap[v].push_back(u);
			}

		}

		void print() {
			
			// prints the adjacency list representation of the graph

			for(pair<T, list<T>> vertex : neighbourMap) {
				T vertexLabel = vertex.first;
				list<T> neighbourList = vertex.second;
				cout << vertexLabel << " : ";
				for(T neighbour : neighbourList) {
					cout << neighbour << " ";
				}
				cout << endl;
			}
			cout << endl;
		
		}
};

int main() {

	graph<string> g;

	g.addEdge("Anisha", "Bhuvnesh");
	g.addEdge("Anisha", "Chaitanya");
	g.addEdge("Bhuvnesh", "Dinesh");
	g.addEdge("Chaitanya", "Dinesh");
	g.addEdge("Chaitanya", "Esha");
	g.addEdge("Dinesh", "Esha");

	g.print();

	return 0;
}
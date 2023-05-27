/*

Given an directed graph, check if there exists a back-edge or not.

*/

#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<queue>

using namespace std;

vector<char> ordering; // to store topological ordering

template <typename T>
class graph {

	unordered_map<T, list<T>> neighbourMap; // to store the graph representation

public :

	void addEdge(T u, T v) {
		// add a directed edge between vertex 'u' and 'v'
		neighbourMap[u].push_back(v);
	}

	void dfsHelper(T source, unordered_set<T>& visited) {

		// mark 'source' as visited
		visited.insert(source);

		// visit 'unvisted' vertices reachable from 'source'

		list<T> neighbourList = neighbourMap[source];
		for (T neighbour : neighbourList) {
			if (visited.find(neighbour) == visited.end()) {
				// neighbour is not visited
				dfsHelper(neighbour, visited);
			}
		}

		ordering.push_back(source);


	}


	void topologicalSort() {

		unordered_set<T> visited;

		// unordered_map<T, int> inDegMap; // to store the mapping b/w the
		// // vertices and their in-degrees

		// // populate the inDegMap

		// for (pair<T, list<T>> vertex : neighbourMap) {
		// 	list<T> neighbourList = vertex.second;
		// 	for (T neighbour : neighbourList) {
		// 		// account for directed edge from 'vertex' to 'neighbour'
		// 		inDegMap[neighbour]++;
		// 	}
		// }

		// // initialise queue with vertices w/o
		// // any dependency i.e. zero in-degree

		// for (pair<T, list<T>> vertex : neighbourMap) {
		// 	T vertexLabel = vertex.first;
		// 	if (inDegMap.find(vertexLabel) == inDegMap.end()) {
		// 		// vertex with 'vertexLabel' has no dependency
		// 		dfsHelper(vertexLabel, visited);
		// 	}
		// }

		for (pair<T, list<T>> vertex : neighbourMap) {
			T vertexLabel = vertex.first;
			if (visited.find(vertexLabel) == visited.end()) {
				// vertex with 'vertexLabel' has no dependency
				dfsHelper(vertexLabel, visited);
			}
		}

	}

};


int main() {

	graph<char> g;

	g.addEdge('A', 'B');
	g.addEdge('A', 'C');
	g.addEdge('A', 'D');
	g.addEdge('B', 'D');
	g.addEdge('B', 'E');
	g.addEdge('D', 'C');
	g.addEdge('D', 'E');
	g.addEdge('D', 'F');
	g.addEdge('D', 'G');
	g.addEdge('D', 'H');
	g.addEdge('E', 'G');
	g.addEdge('F', 'C');
	g.addEdge('G', 'H');
	g.addEdge('H', 'F');

	g.topologicalSort();

	reverse(ordering.begin(), ordering.end());

	for (int i = 0; i < ordering.size(); i++) {
		cout << ordering[i] << " ";
	}

	cout << endl;

	return 0;
}
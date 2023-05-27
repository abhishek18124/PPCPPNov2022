/*

https://leetcode.com/problems/clone-graph/

// Definition for a Node.

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

*/

class Solution {
public:
    Node* cloneGraph(Node* node) {

        if (!node) { // graph is empty
            return NULL;
        }

        unordered_map<Node*, Node*> cloneMap; // to store a mapping b/w nodes in the graph and their clones.
        queue<Node*> q; // to track vertices which have been cloned but the neighborList of the clone isn't populated.

        // create a clone of 'node'

        Node* nodeClone = new Node(node->val);
        cloneMap[node] = nodeClone;
        q.push(node);

        while (!q.empty()) {

            Node* front = q.front(); q.pop();
            vector<Node*> neighbours = front->neighbours;

            Node* frontClone = cloneMap[front];
            for (Node* neighbour : neighbours) {
                if (cloneMap.find(neighbour) == cloneMap.end()) {
                    // neighbour is not yet cloned
                    Node* neighbourClone = new Node(neighbour->val);
                    cloneMap[neighbour] = neighbourClone;
                    q.push(neighbour);
                }
                Node* neighbourClone = cloneMap[neighbour];
                frontClone->neighbours.push_back(neighbourClone);
            }

        }

        // return the clone of 'node'

        return nodeClone; // or cloneMap[node]

    }
};
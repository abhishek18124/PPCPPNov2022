#include<iostream>
#include<unordered_map>

using namespace std;

class node {

	public :

		char ch;
		bool terminal;
		unordered_map<char, node*> childMap;
		int freq;

		node(char ch) {
			this->ch = ch;
			this->terminal = false;
			this->freq = 0;
		}

};

class trie {
	node* root;

	public :

		trie() {
			root = new node('\0');
		}

		void insert(string str) {
			node* temp = root;
			for(char ch : str) {
				if(temp->childMap.find(ch) == temp->childMap.end()) {
					node* n = new node(ch);
					temp->childMap[ch] = n;
				}
				temp = temp->childMap[ch];
				temp->freq++;
			}
			temp->terminal = true;
		}

		string shortestUniquePrefix(string str) {
			node* temp = root;
			string prefix = "";
			for(char ch : str) {
				temp = temp->childMap[ch];
				prefix += ch;
				if(temp->freq == 1) {
					return prefix;
				}
			}
			return "";
		}
};


int main() {

	string words[] = {"code", "coder", "coding", "new", "neon"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	for(string word : words) {
		cout << t.shortestUniquePrefix(word) << endl;
	}

	return 0;
}
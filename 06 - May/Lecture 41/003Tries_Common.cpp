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
	int n;

	public :

		trie() {
			root = new node('\0');
			n = 0;
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
			n++;
		}

		string longestCommonPrefix(string str) {
			node* temp = root;
			string prefix = "";
			for(char ch : str) {
				temp = temp->childMap[ch];
				if(temp->freq != n) {
					break;
				}
				prefix += ch;
			}
			return prefix;
		}

		string longestCommonPrefix() {
			node* temp = root;
			string prefix = "";
			
			while(temp->childMap.size() > 0) {
				temp = temp->childMap.begin()->second;
				if(temp->freq != n) break;
				prefix += temp->ch;
			}	

			return prefix;
		}
};


int main() {

	string words[] = {"floor"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	// cout << t.longestCommonPrefix(words[0]) << endl;
	cout << t.longestCommonPrefix() << endl;

	return 0;
}
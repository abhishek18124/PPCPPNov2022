
#include<iostream>
#include<queue>

using namespace std;

string reorganise(string str) {

    // 1. build the freqMap for the given string 'str'

    int freq[26] = {};

    for(char ch : str) {
        freq[ch-'a']++;
    }

    // for(int i=0; i<26; i++) {
    //     cout << freq[i] << " ";
    // }

    // cout << endl;

    // priority_queue<pair<int, char>, vector<pair<int, char>>, less<pair<int, char>> maxHeap;

    priority_queue<pair<int, char>> maxHeap;

    for(int i=0; i<26; i++) {
        if(freq[i] > 0) {
            maxHeap.push({freq[i], i+'a'});
        }
    }

    // while(!maxHeap.empty()) {
    //     pair<int, char> maxPair = maxHeap.top();
    //     maxHeap.pop();

    //     cout << maxPair.first << " " << maxPair.second << endl;
    // }

    string out = "";

    while(!maxHeap.empty()) {
        if(maxHeap.size() == 1) {
            pair<int, char> maxPair = maxHeap.top(); maxHeap.pop();
            if(maxPair.first > 1) {
                // no possible answer exists
                out = "";
            } else {
                out += maxPair.second;
            }
        } else {
            // maxHeap.size() > 1

            pair<int, char> firstMaxPair = maxHeap.top(); maxHeap.pop();
            out += firstMaxPair.second;

            pair<int, char> secondMaxPair= maxHeap.top(); maxHeap.pop();
            out += secondMaxPair.second;

            firstMaxPair.first--;
            secondMaxPair.first--;

            if(firstMaxPair.first > 0) {
                maxHeap.push(firstMaxPair);
            }

            if(secondMaxPair.first > 0) {
                maxHeap.push(secondMaxPair);
            }
        }
    }

    return out;

}

int main() {

    string str = "aaabbca";

    cout << reorganise(str) << endl;

    return 0;
}
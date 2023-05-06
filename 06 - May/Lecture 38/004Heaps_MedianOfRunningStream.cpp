/*

Given a running stream of integers, design an algorithm to print the median 
of the numbers in the stream each time a new integer is added to the stream.

Example : Input = 4, 6, 2, 5,   3, 1,   7, 9,   8 . . .
          Output= 4, 5, 4, 4.5, 4, 3.5, 4, 4.5, 5 . . .

*/

#include<iostream>
#include<queue>

using namespace std;

int main() {

    int x;
    cin >> x;

    double median = x;
    cout << median << " ";

    priority_queue<int> leftMaxHeap;
    priority_queue<int, vector<int>, greater<int>> rightMinHeap;

    rightMinHeap.push(x);

    while(true) {

        cin >> x;
        if(x > median) {
            // insert 'x' into the rightMinHeap
            if(leftMaxHeap.size() == rightMinHeap.size()) {
                rightMinHeap.push(x);
                median = rightMinHeap.top();
            } else if(leftMaxHeap.size() > rightMinHeap.size()) {
                rightMinHeap.push(x);
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            } else { // leftMaxHeap.size() < rightMinHeap.size()
                leftMaxHeap.push(rightMinHeap.top());
                rightMinHeap.pop();
                rightMinHeap.push(x);
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            }
        } else {
            // insert 'x' into the leftMaxHeap
            if(leftMaxHeap.size() == rightMinHeap.size()) {
                leftMaxHeap.push(x);
                median = leftMaxHeap.top();
            } else if(leftMaxHeap.size() > rightMinHeap.size()) {
                rightMinHeap.push(leftMaxHeap.top());
                leftMaxHeap.pop();
                leftMaxHeap.push(x);
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            } else { // leftMaxHeap.size() < rightMinHeap.size()
                leftMaxHeap.push(x);
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            }
        }

        cout << median << " ";

    }

    return 0;
}
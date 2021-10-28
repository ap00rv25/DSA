#include <bits/stdc++.h>
using namespace std;

struct Myhash{
    int BUCKET;
    list<int> *table;
    Myhash(int b) {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }
    void insert(int key) {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    bool search(int key) {
        int i = key % BUCKET;
        for (auto x : table[i])
           if (x == key)
              return true;
        return false; 
    }
    void remove(int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }
};


int main() {
    Myhash A(7);
    A.insert(10);
    A.insert(6);
    A.insert(9);
    A.insert(15);
    A.insert(11);
    cout<<A.search(10)<<endl;
    A.remove(15);
    cout<<A.search(15)<<endl;
	// your code goes here
	return 0;
}
